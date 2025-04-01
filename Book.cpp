#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    double price;

public:

    void getData() {
        cout << "\nEnter book ID: ";
        cin >> bookId;
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter book price: ";
        cin >> price;
    }

    void setData(int id, string t, double p) {
        bookId = id;
        title = t;
        price = p;
    }

    void displayData() {
        cout << "\nBook ID: " << bookId << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main() {

    Book books[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter data for book " << i + 1 << ":" << endl;
        books[i].getData();
    }

    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << " data: " << endl;
        books[i].displayData();
        cout << endl;
    }

}