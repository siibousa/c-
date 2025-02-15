#include "Hebergement.h"

Hebergement::Hebergement(std::string adresse, int nbEtoiles, std::string nomHotel)
    : adresse(adresse), nbEtoiles(nbEtoiles), nomHotel(nomHotel) {}

std::string Hebergement::getAdresse() const {
    return adresse;
}

int Hebergement::getNbEtoiles() const {
    return nbEtoiles;
}

std::string Hebergement::getNomHotel() const {
    return nomHotel;
}

void Hebergement::setNbEtoiles(int nbEtoiles) {
    this->nbEtoiles = nbEtoiles;
}

void Hebergement::afficherDetails() const {
    std::cout << "Hotel: " << nomHotel << "\nAdresse: " << adresse << "\nNombre d'etoiles: " << nbEtoiles << std::endl;
}
