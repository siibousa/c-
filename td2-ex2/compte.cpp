#include "compte.h"
#include <iostream>
using namespace std;


int Compte::getNumCompte() {
    return numCompte;
}

string Compte::getNomProprietaire() {
    return nomProprietaire;
}

double Compte::getSolde() {
    return solde;
}


void Compte::setNumCompte(int numero) {
    numCompte = numero;
}

void Compte::setNomProprietaire(string nom) {
    nomProprietaire = nom;
}

void Compte::setSolde(double montant) {
    solde = montant;
}


void Compte::saisir() {
    cout << "Entrez le numero du compte: ";
    cin >> numCompte;
    cout << "Entrez le nom du proprietaire: ";
    cin >> nomProprietaire;
    cout << "Entrez le solde initial: ";
    cin >> solde;
}


bool Compte::retirerArgent(double montant) {
    if (montant > solde) {
        cout << "Solde insuffisant!" << endl;
        return false;
    } else {
        solde -= montant;
        return true;
    }
}


void Compte::deposerArgent(double montant) {
    solde += montant;
}


void Compte::consulterSolde() {
    cout << "Le solde du compte " << numCompte << " est: " << solde << " dinars." << endl;
}


bool Compte::transfererArgent(Compte &destinataire, double montant) {
    if (this->retirerArgent(montant)) {
        destinataire.deposerArgent(montant);
        cout << "Transfert de " << montant << " dinars vers le compte de " << destinataire.getNomProprietaire() << " effectué avec succès." << endl;
        return true;
    }
    return false;
}
