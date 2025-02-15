#ifndef BANQUE_H
#define BANQUE_H
#include "compte.h"

class Banque {
private:
    string nomBanque;
    Compte Tab[50];
public:
    void saisirNomBanque();
    bool chercherCompte(int numCompte, int& n);
    void ajouter( Compte& compte, int& n);
    void afficherBanque(int n);
};

#endif
