#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

    
    float total_cost(int n) const {
        return BookPrice * n;
    }

public:
    
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore(); 
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

   
    void displayDetails() const {
        cout << "Book ID: " << BookID << endl;
        cout << "Book Name: " << BookName << endl;
        cout << "Book Price: ₹" << BookPrice << endl;
    }


    void purchase() const {
        int copies;
        cout << "Enter number of copies to purchase: ";
        cin >> copies;
        float cost = total_cost(copies);
        cout << "Total cost for " << copies << " copies: ₹" << cost << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Book book1, book2, book3;

    cout << "Enter details for Book 1:\n";
    book1.inputDetails();
    cout << "\nEnter details for Book 2:\n";
    book2.inputDetails();
    cout << "\nEnter details for Book 3:\n";
    book3.inputDetails();

    cout << "\nBook 1:\n";
    book1.displayDetails();
    book1.purchase();

    cout << "\nBook 2:\n";
    book2.displayDetails();
    book2.purchase();

    cout << "\nBook 3:\n";
    book3.displayDetails();
    book3.purchase();

    return 0;
}
