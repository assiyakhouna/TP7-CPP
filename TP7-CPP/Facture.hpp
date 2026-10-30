
#ifndef FACTURE_HPP
#define FACTURE_HPP

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure pour représenter un article
struct Article {
    string nom;
    double prixUnitaire;
    int quantite;
    double tauxTVA;
};

class Facture {
private:
    vector<Article> articles;

public:
    // Surcharge de la methode ajouterArticle()
    void ajouterArticle(string nom, double prix);

    void ajouterArticle(string nom, double prix, int quantite);

    void ajouterArticle(string nom, double prix, int quantite, double tva);

    // Afficher le total
    void afficherTotal();
};

#endif
