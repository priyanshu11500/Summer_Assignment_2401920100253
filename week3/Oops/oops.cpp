#include <bits/stdc++.h>
using namespace std;

class Compartment {
public:
    virtual string notice() = 0;
};

class FirstClass : public Compartment {
public:
    string notice() override {
        return "Notice: First Class - Reserved passengers only.";
    }
};

class Ladies : public Compartment {
public:
    string notice() override {
        return "Notice: Ladies Compartment - Men are strictly not allowed.";
    }
};

class General : public Compartment {
public:
    string notice() override {
        return "Notice: General Compartment - Valid unreserved tickets required.";
    }
};

class Luggage : public Compartment {
public:
    string notice() override {
        return "Notice: Luggage Van - Authorized personnel and freight only.";
    }
};

class TestCompartment {
public:
    static void main() {

        Compartment* compartments[10];

        srand(time(0));

        for(int i = 0; i < 10; i++) {

            int type = rand() % 4 + 1;

            switch(type) {

                case 1:
                    compartments[i] = new FirstClass();
                    break;

                case 2:
                    compartments[i] = new Ladies();
                    break;

                case 3:
                    compartments[i] = new General();
                    break;

                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        for(int i = 0; i < 10; i++) {
            cout << "Coach " << i + 1 << " -> "
                 << compartments[i]->notice()
                 << endl;
        }

        for(int i = 0; i < 10; i++) {
            delete compartments[i];
        }
    }
};

int main() {

    TestCompartment::main();

    return 0;
}