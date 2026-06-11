#include <bits/stdc++.h>

using namespace std;

class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};


class KidUser : public LibraryUser {
private:
    int age;
    string bookType;

public:

    void setAge(int age) {
        this->age = age;
    }

    void setBookType(string bookType) {
        this->bookType = bookType;
    }

    void registerAccount() override {
        if(age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        }
        else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }


    void requestBook() override {
        if(bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};


class AdultUser : public LibraryUser {
private:
    int age;
    string bookType;

public:

    void setAge(int age) {
        this->age = age;
    }

    void setBookType(string bookType) {
        this->bookType = bookType;
    }


    void registerAccount() override {
        if(age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        }
        else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }


    void requestBook() override {
        if(bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};


int main() {

    KidUser kid;

    kid.setAge(10);
    kid.registerAccount();

    kid.setAge(18);
    kid.registerAccount();

    kid.setBookType("Kids");
    kid.requestBook();

    kid.setBookType("Fiction");
    kid.requestBook();


    cout << "--------------------------------------------------" << endl;


    AdultUser adult;

    adult.setAge(5);
    adult.registerAccount();

    adult.setAge(23);
    adult.registerAccount();

    adult.setBookType("Kids");
    adult.requestBook();

    adult.setBookType("Fiction");
    adult.requestBook();


    return 0;
}