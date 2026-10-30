#include "Contact.hpp"

// Constructeur 1
Contact::Contact(string n) {
    nom = n;
    telephone = "Non disponible";
    email = "Non disponible";
}

// Constructeur 2
Contact::Contact(string n, string tel) {
    nom = n;
    telephone = tel;
    email = "Non disponible";
}

// Constructeur 3
Contact::Contact(string n, string tel, string mail) {
    nom = n;
    telephone = tel;
    email = mail;
}

// Methode afficher
void Contact::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Telephone : " << telephone << endl;
    cout << "Email : " << email << endl;
}