#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <iostream>
#include <string>

class Evenement {
private:
    int annee;
    std::string nom;
    std::string lieu;
    std::string type;

public:
    // Constructeur
    Evenement(int annee, std::string nom, std::string lieu, std::string type);

    // Afficher un événement
    void afficher() const;

    // Getters
    int getAnnee() const;
    std::string getNom() const;
    std::string getLieu() const;
    std::string getType() const;

    // Surcharge de l'opérateur < pour trier par année
    bool operator<(const Evenement &autre) const;
};

#endif // EVENEMENT_H
