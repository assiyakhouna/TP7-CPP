#include <iostream>
#include "Contact.hpp"
using namespace std;

int main() {

    // Contact avec nom uniquement
    Contact c1("Ahmed");

    // Contact avec nom et telephone
    Contact c2("Sara", "0612345678");

    // Contact avec nom, telephone et email
    Contact c3("Youssef", "0623456789",
               "youssef@gmail.com");

    cout << "=== Contact 1 ===" << endl;
    c1.afficher();

    cout << "\n=== Contact 2 ===" << endl;
    c2.afficher();

    cout << "\n=== Contact 3 ===" << endl;
    c3.afficher();

    return 0;
}