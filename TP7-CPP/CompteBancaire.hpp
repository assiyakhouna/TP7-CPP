
#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP

#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    double solde;
    string codeSecurite;

public:
    // Constructeur sans solde initial
    CompteBancaire();

    // Constructeur avec solde initial
    CompteBancaire(double soldeInitial);

    // Afficher le solde
    void afficherSolde();

    // Retrait sans code de securite
    void retrait(double montant);

    // Retrait avec code de securite
    void retrait(double montant, string code);
};

#endif
