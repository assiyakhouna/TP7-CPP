
#include "CompteBancaire.hpp"

// Constructeur sans parametre
CompteBancaire::CompteBancaire() {
    solde = 0;
    codeSecurite = "1234";
}

// Constructeur avec solde initial
CompteBancaire::CompteBancaire(double soldeInitial) {
    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        solde = 0;
    }

    codeSecurite = "1234";
}

// Afficher le solde
void CompteBancaire::afficherSolde() {
    cout << "Solde actuel : " << solde << " DH" << endl;
}

// Retrait sans code de securite
void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        cout << "Erreur : montant invalide !" << endl;
    }
    else if (montant > solde) {
        cout << "Erreur : solde insuffisant !" << endl;
    }
    else {
        solde -= montant;
        cout << "Retrait effectue avec succes !" << endl;
    }
}

// Retrait avec code de securite
void CompteBancaire::retrait(double montant, string code) {
    if (code != codeSecurite) {
        cout << "Erreur : code de securite incorrect !" << endl;
    }
    else if (montant <= 0) {
        cout << "Erreur : montant invalide !" << endl;
    }
    else if (montant > solde) {
        cout << "Erreur : solde insuffisant !" << endl;
    }
    else {
        solde -= montant;
        cout << "Retrait securise effectue avec succes !" << endl;
    }
}
