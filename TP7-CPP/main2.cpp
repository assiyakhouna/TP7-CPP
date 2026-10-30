
#include "Facture.hpp"

int main() {

    Facture f;

    // Version 1 : nom et prix
    f.ajouterArticle("Clavier", 150);

    // Version 2 : nom, prix et quantite
    f.ajouterArticle("Souris", 80, 2);

    // Version 3 : nom, prix, quantite et TVA
    f.ajouterArticle("Ecran", 1200, 1, 10);

    // Afficher la facture
    f.afficherTotal();

    return 0;
}
