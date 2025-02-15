#ifndef HEBERGEMENT_H
#define HEBERGEMENT_H

#include <string>
#include <iostream>

class Hebergement {
private:
    std::string adresse;
    int nbEtoiles;
    std::string nomHotel;

public:
    // Constructeur
    Hebergement(std::string adresse, int nbEtoiles, std::string nomHotel);

    // Accesseurs
    std::string getAdresse() const;
    int getNbEtoiles() const;
    std::string getNomHotel() const;

    // Modificateur
    void setNbEtoiles(int nbEtoiles);

    // Affichage des détails
    void afficherDetails() const;
};

#endif // HEBERGEMENT_H
