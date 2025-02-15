#include "Voyage.h"

Voyage::Voyage(int id, std::string villeOrigine, std::string villeDestination,
               std::string dateDepart, std::string dateRetour, float prix, std::string nom)
    : id(id), villeOrigine(villeOrigine), villeDestination(villeDestination),
      dateDepart(dateDepart), dateRetour(dateRetour), prix(prix), nom(nom), hebergement(nullptr) {}

int Voyage::getId() const {
    return id;
}

std::string Voyage::getVilleOrigine() const {
    return villeOrigine;
}

std::string Voyage::getVilleDestination() const {
    return villeDestination;
}

std::string Voyage::getDateDepart() const {
    return dateDepart;
}

std::string Voyage::getDateRetour() const {
    return dateRetour;
}

float Voyage::getPrix() const {
    return prix;
}

std::string Voyage::getNom() const {
    return nom;
}

Hebergement* Voyage::getHebergement() const {
    return hebergement;
}

void Voyage::setHebergement(Hebergement* h) {
    hebergement = h;
}

void Voyage::afficherDetails() const {
    std::cout << "Voyage: " << nom << "\nID: " << id << "\nVille d'origine: " << villeOrigine
              << "\nVille de destination: " << villeDestination << "\nDate de depart: " << dateDepart
              << "\nDate de retour: " << dateRetour << "\nPrix: " << prix << " DT" << std::endl;

    if (hebergement) {
        std::cout << "Details de l'hebergement: \n";
        hebergement->afficherDetails();
    }
}
