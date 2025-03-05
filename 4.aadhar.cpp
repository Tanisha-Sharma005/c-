#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Profile {
private:
    char name[30];
    int age;
    double aadhar, ticket;

public:
    Profile();
    void add();
    void tick();
    void print();
};

Profile::Profile() {
    strcpy(name, "Tanisha");
    age = 20;
    aadhar = 999999;
    ticket = 0;
}

void Profile::add() {
    cin >> name >> age >> aadhar;
}

void Profile::tick() {
    ticket = aadhar + age;
    cout << "Ticket Value: " << ticket << endl;
}

void Profile::print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Aadhar: " << aadhar << endl;
}

int main() {
    Profile pr[10];
    for (int i = 0; i < 10; i++) {
        pr[i].add();
        pr[i].print();
        pr[i].tick();
        cout << "Value of i inside the for loop: " << i << endl;
    }
    cout << "Value of i outside the for loop: " << 10 << endl;
    return 0;
}
