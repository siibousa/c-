#include "Evenement.h"

Evenement::Evenement(int annee, std::string nom, std::string lieu, std::string type)
    : annee(annee), nom(nom), lieu(lieu), type(type) {}

void Evenement::afficher() const {
    std::cout << annee << ", " << nom << ", " << lieu << ", " << type << std::endl;
}

int Evenement::getAnnee() const {
    return annee;
}

std::string Evenement::getNom() const {
    return nom;
}

std::string Evenement::getLieu() const {
    return lieu;
}

std::string Evenement::getType() const {
    return type;
}

// Permet de trier par année
bool Evenement::operator<(const Evenement &autre) const {
    return annee < autre.annee;
}
