#include <iostream>
#include <vector>
#include <algorithm> // for std::find_if
#include <string>

// Book class definition
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

    // Getters
    int getBookID() const { return bookID; }
    
    // Method to display book information
    void displayBookInfo() const {
        std::cout << "ID: " << bookID << "\n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Publisher: " << publisher << "\n";
        std::cout << "Quantity: " << quantity << "\n";
    }
};

// Global vector to store books
std::vector<Book> books;

// Function to add a book
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

    books.emplace_back(id, title, author, publisher, qty);
    std::cout << "Book added successfully.\n";
}

// Function to delete a book by ID
void deleteBook() {
    int id;
    std::cout << "Enter Book ID to delete: ";
    std::cin >> id;

    auto it = std::find_if(books.begin(), books.end(), [id](const Book& book) {
        return book.getBookID() == id;
    });

    if (it != books.end()) {
        books.erase(it);
        std::cout << "Book with ID " << id << " deleted successfully.\n";
    } else {
        std::cout << "Book with ID " << id << " not found.\n";
    }
}

// Function to display the menu
void displayMenu() {
    std::cout << "Management System\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Delete Book\n";
    std::cout << "3. update book\n";
    std::cout << "4. search book\n";
    std::cout << "5. Exit\n";
}
 /*   class Book1 {
private:
    int book1ID;
    std::string title;
    std::string author;
    std::string publisher;
    int quantity;

public:
    // Constructor and other methods...   

    int getBook1ID() { return book1ID; }

    // Method to display book information
    void displayBook1Info() {
        std::cout << "ID: " << book1ID << "\n";
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Publisher: " << publisher << "\n";
        std::cout << "Quantity: " << quantity << "\n";
    }
}; */



// Main function
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
            deleteBook();
            break;
        case 3:
             // update book();
             break;
        case 4:
             // search book();
             break;
            
        case 5:
            return 0;
            
        default:
            std::cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
