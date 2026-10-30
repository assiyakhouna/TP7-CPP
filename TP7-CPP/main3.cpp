
#include "CompteBancaire.hpp"

int main() {

    // Compte sans solde initial
    CompteBancaire c1;

    // Compte avec solde initial
    CompteBancaire c2(2000);

    cout << "=== COMPTE 1 ===" << endl;
    c1.afficherSolde();

    cout << "\n=== COMPTE 2 ===" << endl;
    c2.afficherSolde();

    // Retrait sans code
    cout << "\n--- Retrait sans code ---" << endl;
    c2.retrait(500);
    c2.afficherSolde();

    // Retrait avec code incorrect
    cout << "\n--- Retrait avec code incorrect ---" << endl;
    c2.retrait(300, "1111");
    c2.afficherSolde();

    // Retrait avec code correct
    cout << "\n--- Retrait avec code correct ---" << endl;
    c2.retrait(300, "1234");
    c2.afficherSolde();

    // Test montant superieur au solde
    cout << "\n--- Retrait montant eleve ---" << endl;
    c2.retrait(5000, "1234");
    c2.afficherSolde();

    return 0;
}
