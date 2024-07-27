
#include <iostream>
using namespace std;
class Book {
private:
    int bookID;
    std::string title;
    std::string author;
    std::string publisher;
    int quantity;

public:
    // Constructor
    Book(int id, std::string t, std::string a, std::string p, int q)
        : bookID(id), title(t), author(a), publisher(p), quantity(q) {}

    // Getters and Setters
    int getBookID() { return bookID; }
    std::string getTitle() { return title; }
    void setTitle(std::string t) { title = t; }
    // Other getters and setters...

    // Methods
    void displayBookInfo();
    // Other methods...
};
 void addBook() {
    int id, qty;
    std::string title, author, publisher;

    std::cout << "Enter Book ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Title: ";
    std::getline(std::cin, title);
    std::cout << "Enter Author: ";
    std::getline(std::cin, author);
    std::cout << "Enter Publisher: ";
    std::getline(std::cin, publisher);
    std::cout << "Enter Quantity: ";
    std::cin >> qty;

    Book newBook(id, title, author, publisher, qty);
    // Save newBook to storage (e.g., file, database)
}

void displayMenu() {
    std::cout << "Management System\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Delete Book\n";
    std::cout << "3. Update Book\n";
    std::cout << "4. Search Book\n";
    std::cout << "5. Exit\n";
}

int main() {
    int choice;
    while (true) {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
           addBook();
            break;
        case 2:
            // deleteBook();
            break;
        case 3:
            // updateBook();
            break;
        case 4:
            // searchBook();
            break;
        case 5:
            exit(0);
        default:
            std::cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
