#include <iostream>
#include <list>
#include <fstream>
#include <string>

#include <algorithm>

using namespace std;
const size_t SIZE = 50;
struct Book {
	string author;
	string name;
	size_t year;
	bool available;
	friend ostream& operator<<(ostream& os, const Book& book) {
			os << "Author: " << book.author << ", Title: " << book.name
			<< ", Year: " << book.year
			<< ", Available: " << (book.available ? "Yes" : "No");
		return os;
	}

};

class library {
private:
	list<Book> lib;
public:
	void addBook(const string& author, const string& name, size_t year, bool available) {
		lib.push_back({ author, name, year, available });
	}
	void printBooks() const {
		if (lib.empty()) {
			cout << "The library is empty." << endl;
			return;
		}

		for (const auto& book : lib) {
			cout << book << endl;
		}
		
	}
	void find(const string& author, const string& name)
	{
		auto it = find_if(lib.begin(), lib.end(), [&](const Book& b) {return b.author == author && b.name == name; });
		if (it != lib.end()) {
			cout << "Book found: " << *it << endl;
		}
		else {
			cout << "Book by author " << author << " with name " << name << " not found." << endl;
		}
	}
	void findbyAuthor(const string& author) {
		bool found = false;
		for (const auto& book : lib) {
			if (book.author == author) {
				cout << book << endl;
				found = true;
			}
		}
		if (!found) {
			cout << "Books by author " << author << " not found" << endl;
		}
	}
	void BookAvable(const string& author, const string& name)
	{
		auto it = find_if(lib.begin(), lib.end(), [&](const Book& b) {return b.author == author && b.name == name; });
		if (it != lib.end()) {
			cout << "Book found: " << *it << endl;
			it->available = false;
		}
		
	}
	void BookAvable1(const string& author, const string& name)
	{
		auto it = find_if(lib.begin(), lib.end(), [&](const Book& b) {return b.author == author && b.name == name; });
		if (it != lib.end()) {
			cout << "Book found: " << *it << endl;
			it->available = true;
		}
		
	}
	void SortBook() {
		lib.sort([](const Book& a, const Book& b) {
			if (a.author == b.author)
				return a.name < b.name; 
			return a.author < b.author; 
			});
		cout << "Books sorted" << endl;
	}
	void removeBookByIndex(size_t index) {
		if (index >= lib.size()) {
			cout << "Invalid index" << endl;
			return;
		}
		auto it = lib.begin();
		advance(it, index); 
		lib.erase(it);
		cout << "Book removed" << endl;
	}
	void editBookByIndex(size_t index, const string& newAuthor, const string& newName, size_t newYear, bool newAvailable) {
		if (index >= lib.size()) {
			cout << "Invalid index" << endl;
			return;
		}
		auto it = lib.begin();
		advance(it, index);
		it->author = newAuthor;
		it->name = newName;
		it->year = newYear;
		it->available = newAvailable;
		cout << "Book edited" << endl;
	}
	void writeToFileArray(const string& pathFile)
	{
		ofstream file;
		file.open(pathFile);
		if (!file.good())
		{
			cout << "Error. File not open" << endl;
			return;
		}

		for (const auto& book : lib) {
			file << book.author << " " << book.name << " " << book.year << " " << book.available << endl;
		}
		file.close();
	}
	void readBooksFromFile(const string& pathFile) {
		ifstream file(pathFile);
		if (!file.is_open()) {
			cout << "Error. File not open" << endl;
			return;
		}

		lib.clear(); 

		string author, name;
		size_t year;
		int available; 
		lib.clear();
		while (file >> author >> name >> year >> available) {
			lib.push_back({ author, name, year, available != 0 });
		}
		file.close();
	
	}

};





int main()
{
	library lib;

	lib.addBook("Author1", "Book1", 2000, true);
	lib.addBook("Author2", "Book2", 1995, false);
	lib.addBook("Author3", "Book3", 2010, true);
	lib.printBooks();
	cout << endl << endl;

	lib.SortBook();
	lib.printBooks();
	cout << endl << endl;

	lib.removeBookByIndex(1);
	lib.printBooks();

	cout << endl << endl;

	lib.editBookByIndex(0, "Updated_Author", "Updated_Book", 2021, false);
	lib.printBooks();

	cout << endl << endl;

	lib.find("Updated_Author", "Updated_Book");

	cout << endl << endl;

	lib.writeToFileArray("library.txt");
	lib.readBooksFromFile("library.txt");
	lib.printBooks();
}

