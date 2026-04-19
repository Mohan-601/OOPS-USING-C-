
// develop a library book issued system
#include <iostream>
using namespace std;

class Library {
private:
    int bookId;
    string bookName;
    bool issued;

public:
    // constructor

    Library() {
        issued = false;
    }

    void addBook() {
        cout << "Enter Book ID and Name: ";
        cin >> bookId >> bookName;
        issued = false;
        cout << "Book added successfully\n";
    }

    void issueBook() {
        if(bookId == 0) {
            cout << "No book available\n";
            return;
        }

        if(!issued) {
            issued = true;
            cout << "Book issued successfully\n";
        } else {
            cout << "Book already issued\n";
        }
    }

    void returnBook() {
        if(bookId == 0) {
            cout << "No book exists\n";
            return;
        }

        if(issued) {
            issued = false;
            cout << "Book returned successfully\n";
        } else {
            cout << "Book was not issued\n";
        }
    }

    void displayStatus() {
        if(bookId == 0) {
            cout << "No book available\n";
            return;
        }

        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;
        cout << "\nStatus: " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n----- LIBRARY MENU -----\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Status\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: lib.addBook(); break;
            case 2: lib.issueBook(); break;
            case 3: lib.returnBook(); break;
            case 4: lib.displayStatus(); break;
        }

    } while(choice != 5);

    return 0;
}