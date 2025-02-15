#ifndef COMPTE_H
#define COMPTE_H

#include <string>
using namespace std;

class Compte {
private:
    int numCompte;
    string nomProprietaire;
    double solde;

public:
    int getNumCompte();
    string getNomProprietaire();
    double getSolde();

    void setNumCompte(int numero);
    void setNomProprietaire(string nom);
    void setSolde(double montant);

    void saisir();
    bool retirerArgent(double montant);
    void deposerArgent(double montant);
    void consulterSolde();
    bool transfererArgent(Compte &destinataire, double montant);
};

#endif 
