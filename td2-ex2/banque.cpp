#include "Banque.h"
#include <iostream>
using namespace std;

void Banque::saisirNomBanque() {
    cout << "Entrez le nom de la banque: ";
    cin >> nomBanque;
}


bool Banque::chercherCompte(int numCompte, int& n) {
    for (int i = 0; i < n; i++) {
        if (Tab[i].getNumCompte() == numCompte) {
            return true;
        }
    }
    return false;
}


void Banque::ajouter( Compte& compte, int& n) {
    if (chercherCompte(compte.getNumCompte(), n)) {
        cout << "Le compte existe déjà!" << endl;
    } else {
        Tab[n] = compte;
        n++;
    }
}


void Banque::afficherBanque(int n) {
    cout << "Banque: " << nomBanque << endl;
    for (int i = 0; i < n; i++) {
        cout << "Compte " << i + 1 << ": ";
        Tab[i].consulterSolde();
    }
}
