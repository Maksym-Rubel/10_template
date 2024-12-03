#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


const size_t SIZE = 50;
struct Train
{
    size_t number;
    char destination[SIZE];
    char from[SIZE];

    void print() const
    {
        cout << "\n============= Number of train " << number << " ==================\n";
        cout << "\t Place from :: " << from << endl;
        cout << "\t Destination :: " << destination << endl;

    }


};



int main()
{
    string fname = "train.dat";

    Train train{ 100,"Odesa","Lviv" };
    Train trainArr[2]{
        {70,"Prague", "Odesa"},
        {88,"Warszaw", "Poltava"},

    };
    vector<Train> trainVec
    {
        {70,"Budapest", "Kyiv"},
        {88,"Rivne", "Kyiv"},
    };
    train.print();

    fstream file(fname, ios_base::in | ios_base::out | ios_base::binary);
    if (!file.is_open())
    {
        cout << "Error!!! File not found" << endl;
        return 0;
    }
    //write one object train
    file.write((char*)&train, sizeof(train));

    file.write(reinterpret_cast<const char*>(trainArr), sizeof(trainArr));


    file.write(reinterpret_cast<const char*>(trainVec.data()), sizeof(Train) * trainVec.size());

    


    /////////////////////////////////////////////////////

    file.seekg(0);
    Train tmp;
    while (file.read((char*)&train, sizeof(Train)))
    {
        tmp.print();
    }
    /////////////////////////////////////////////////////
    file.clear();
    file.seekg(0);

    vector<Train> result;
    while (file.read(reinterpret_cast<char*>(&tmp), sizeof(Train)))
    {
        result.push_back(tmp);

    }
    cout << "Result :: ";
    for (auto& i : result)
    {
        i.print();
    }

    cout << "Number of trains :: " << count_if(result.begin(), result.end(), [](Train el) {return !strcmp(el.from, "Kyiv"); }) << endl;
    
    cout << endl << endl;
    file.clear();
    file.seekg(0);
    result.clear();
    size_t lengthFile = file.tellg();
}
