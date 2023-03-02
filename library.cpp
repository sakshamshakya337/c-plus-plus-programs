#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string ISBN;
    int sectionNumber;
    bool checkedOut;
};

void printBook(Book book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "ISBN: " << book.ISBN << endl;
    cout << "Section Number: " << book.sectionNumber << endl;
    cout << "Status: " << (book.checkedOut ? "Checked Out" : "Available") << endl;
}

int main() {
    vector<Book> books;
    int option;

    while (true) {
        cout << "Library Book Collection Management System" << endl;
        cout << "========================================" << endl;
        cout << "1. Add a book" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Search for a book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter an option: ";
        cin >> option;

        switch (option) {
            case 1: {
                Book book;
                cout << "Enter the title: ";
                cin >> book.title;
                cout << "Enter the author: ";
                cin >> book.author;
                cout << "Enter the ISBN: ";
                cin >> book.ISBN;
                cout << "Enter the section number: ";
                cin >> book.sectionNumber;
                book.checkedOut = false;
                books.push_back(book);
                cout << "Book added successfully!" << endl;
                break;
            }
            case 2: {
                string ISBN;
                cout << "Enter the ISBN of the book to remove: ";
                cin >> ISBN;
                bool found = false;
                for (int i = 0; i < books.size(); i++) {
                    if (books[i].ISBN == ISBN) {
                        books.erase(books.begin() + i);
                        found = true;
                        break;
                    }
                }
                if (found) {
                    cout << "Book removed successfully!" << endl;
                } else {
                    cout << "Book not found!" << endl;
                }
                break;
            }
            case 3: {
                string searchQuery;
                cout << "Enter a search query (title, author, or ISBN): ";
                cin >> searchQuery;
                bool found = false;
                for (int i = 0; i < books.size(); i++) {
                    Book book = books[i];
                    if (book.title.find(searchQuery) != string::npos ||
                        book.author.find(searchQuery) != string::npos ||
                        book.ISBN.find(searchQuery) != string::npos) {
                        printBook(book);
                        found = true;
                    }
                }
                if (!found) {
                    cout << "No matching books found!" << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}
