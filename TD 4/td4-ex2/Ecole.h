#ifndef ECOLE_H
#define ECOLE_H

#include "Etudiant.h"
#include <vector>

class Ecole {
private:
    std::vector<Etudiant> etudiants;

    // Vérifie si un ID existe déjà
    bool idExiste(int id);

public:
    // Ajouter un étudiant
    void ajouterEtudiant(const Etudiant &e);

    // Afficher tous les étudiants
    void afficherTous() const;

    // Rechercher un étudiant par ID
    void rechercherEtudiant(int id) const;

    // Supprimer un étudiant par ID
    void supprimerEtudiant(int id);

    // Rechercher tous les étudiants d'une classe
    void rechercherParClasse(std::string classe) const;
};

#endif // ECOLE_H
