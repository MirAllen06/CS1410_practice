#include <iostream>
#include <iomanip>
#include "author.h"

using namespace std;

class Book {
private:
	string title;
	int year;
	Author author;

public:
	Book(const string& t, int y, const Author& a) : title(t), year(y), author(a) {}

	string getTitle() const {
		return title;
	}
	int getYear() const {
		return year;
	}
	Author getAuthor() const {
		return author;
	}

	void setTitle(const string& t) {
		title = t;
	}
	void setYear(int y) {
		year = y;
	}
	void setAuthor(const Author& a) {
		author = a;
	}

	void show() const {
		cout << "Book:" << title << "( " << ", Year: " << year << " )\n"
			<< "  Author: " << author.getName() << "[" << author.getNationality() << "]" << endl;
	}
};

int main() {
	Author a("George Orwell", "British");
	Book b("1984", 1949, a);

	b.show();

	return 0;
};