#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Animal {
protected:
    string name;  
    size_t age;    

public:
    Animal(const string& name, size_t age) 
        : name(name), age(age) 
    {}
   

   
    string getName() const 
    { 
        return name; 
    }
    void setName(const string& newName)
    { 
        name = newName; 
    }

    size_t getAge() const 
    { 
        return age;
    }
    void setAge(size_t newAge)
    {
        age = newAge;
    }

   
    virtual void sound() const = 0; 
    virtual void type() const = 0;  
    virtual void show() const = 0;  



};

class Dog : public Animal {
public:
    Dog(const string& name, size_t age) 
        : Animal(name, age) 
    {}

    void sound() const override 
    { 
        cout << "Woof" << endl; 
    }
    void type() const override 
    { 
        cout << "Dog" << endl; 
    }
    void show() const override {
        cout << "Type: Dog, Name: " << name << ", Age: " << age << ", Sound: Woof" << endl;
    }
};
class Cat : public Animal {
public:
    Cat(const string& name, size_t age)
        : Animal(name, age)
    {}

    void sound() const override
    {
        cout << "Meuw" << endl;
    }
    void type() const override
    {
        cout << "Cat" << endl;
    }
    void show() const override {
        cout << "Type: Cat, Name: " << name << ", Age: " << age << ", Sound: Meuw" << endl;
    }
};
class Parrot : public Animal {
public:
    Parrot(const string& name, size_t age)
        : Animal(name, age)
    {}

    void sound() const override
    {
        cout << "Carr" << endl;
    }
    void type() const override
    {
        cout << "Parrot" << endl;
    }
    void show() const override {
        cout << "Type: Parrot, Name: " << name << ", Age: " << age << ", Sound: Carr" << endl;
    }
};


class Zoo {
private:
    vector<Animal*> zoo;

public:

    Zoo() = default;
    ~Zoo() {
        for (auto& pet : zoo) {
            delete pet;
        }
        zoo.clear();
    }
    void addAnimal() {
        string type;
        cout << "Enter the type of animal (Dog, Cat, Parrot): ";
        cin >> type;

        string name;
        size_t age;
        cout << "Enter the name of the " << type << ": ";
        cin >> name;
        cout << "Enter the age of the " << type << ": ";
        cin >> age;

        Animal* newAnimal = nullptr;
        if (type == "Dog" or type == "dog") {
            newAnimal = new Dog(name, age);
        }
        else if (type == "Cat" or type == "cat") {
            newAnimal = new Cat(name, age);
        }
        else if (type == "Parrot" or type == "parrot") {
            newAnimal = new Parrot(name, age);
        }

        else {
            cout << "Unknown animal type!" << endl;
            return;
        }

        zoo.push_back(newAnimal);
    }

    void addRandomAnimals(int n) {
        srand(time(0)); 

        for (int i = 0; i < n; ++i) {
            int typeIndex = rand() % 4;
            string name = "Animal" + to_string(i + 1);
            size_t age = rand() % 10 + 1;

            Animal* newAnimal = nullptr;
            switch (typeIndex) {
            case 0: newAnimal = new Dog(name, age); 
                break;
            case 1: newAnimal = new Cat(name, age); 
                break;
            case 2: newAnimal = new Parrot(name, age); 
                break;
            
            }

            zoo.push_back(newAnimal);
        }

        
    }

    void showAllAnimals() const {
        if (!zoo.empty()) {
            for (const auto& pet : zoo) {
                pet->show();
            }

        }
        else
            cout << "zoo empty " << endl;
    }
    void editAnimal() {
        string name;
        cout << "Enter the name of the animal to edit: ";
        cin >> name;

        for (auto& pet : zoo) {
            if (pet->getName() == name) {
                string newName;
                size_t newAge;
                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, newName);

                if (!newName.empty()) 
                    pet->setName(newName);

                cout << "Enter new age: ";
                cin >> newAge;
                pet->setAge(newAge);

               
                return;
            }
        }

        cout << "Animal not found" << endl;
    }


    void removeAnimal() {
        string name;
        cout << "Enter the name of the animal to remove: ";
        cin >> name;

        for (auto it = zoo.begin(); it != zoo.end(); ++it) {
            if ((*it)->getName() == name) {
                delete* it;  
                zoo.erase(it);
                return;
            }
        }

        cout << "Animal not found!" << endl;
    }

    void removeAllAnimals() {
        for (auto& pet : zoo) {
            delete pet;
        }
        zoo.clear();
        
    }
};






