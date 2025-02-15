#include "Etudiant.h"

Etudiant::Etudiant(std::string nom, std::string adresse, std::string classe, std::string dateNaissance, int id)
    : nom(nom), adresse(adresse), classe(classe), dateNaissance(dateNaissance), id(id) {}

void Etudiant::afficher() const {
    std::cout << "ID: " << id << " | Nom: " << nom << " | Adresse: " << adresse
              << " | Classe: " << classe << " | Date de naissance: " << dateNaissance << std::endl;
}

int Etudiant::getId() const {
    return id;
}

std::string Etudiant::getClasse() const {
    return classe;
}
