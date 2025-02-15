#include <iostream>
#include "compte.h"
#include "Banque.h"

using namespace std;

int main() {
    
    Compte A;
    A.setNumCompte(8271);
    A.setNomProprietaire("Yassine Besbes");
    A.setSolde(2000);
    A.deposerArgent(100);
    A.consulterSolde();
    cout << "name of client " << A.getNomProprietaire() << endl;
    cout << "Numero de compte: " << A.getNumCompte() << endl;
    A.deposerArgent(100);
    A.consulterSolde();
    Banque maBanque;
    maBanque.saisirNomBanque();
    int n = 0;
    maBanque.ajouter(A, n);
    n++;
    Compte B;
    B.saisir();
    maBanque.ajouter(B, n);
    n++;
    maBanque.afficherBanque(n);
    cout << "Avant transfert: " << endl;
    A.consulterSolde();
    B.consulterSolde();
    A.transfererArgent(B, 50);
    cout << "Après transfert: " << endl;
    A.consulterSolde();
    B.consulterSolde();
    return 0;
}
