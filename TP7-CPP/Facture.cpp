
#include "Facture.hpp"

// Version 1 : nom et prix
void Facture::ajouterArticle(string nom, double prix) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = 1;
    a.tauxTVA = 20;

    articles.push_back(a);
}

// Version 2 : nom, prix et quantite
void Facture::ajouterArticle(string nom, double prix, int quantite) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = quantite;
    a.tauxTVA = 20;

    articles.push_back(a);
}

// Version 3 : nom, prix, quantite et TVA
void Facture::ajouterArticle(string nom, double prix, int quantite, double tva) {
    Article a;

    a.nom = nom;
    a.prixUnitaire = prix;
    a.quantite = quantite;
    a.tauxTVA = tva;

    articles.push_back(a);
}

// Afficher le total de la facture
void Facture::afficherTotal() {
    double total = 0;

    cout << "===== FACTURE =====" << endl;

    for (int i = 0; i < articles.size(); i++) {
        double sousTotal = articles[i].prixUnitaire
                         * articles[i].quantite;

        double montantTVA = sousTotal * articles[i].tauxTVA / 100;

        double totalArticle = sousTotal + montantTVA;

        cout << "Article : " << articles[i].nom << endl;
        cout << "Prix unitaire : " << articles[i].prixUnitaire << endl;
        cout << "Quantite : " << articles[i].quantite << endl;
        cout << "TVA : " << articles[i].tauxTVA << "%" << endl;
        cout << "Total article TTC : " << totalArticle << endl;
        cout << "-------------------" << endl;

        total += totalArticle;
    }

    cout << "Total de la facture TTC : " << total << " DH" << endl;
}
