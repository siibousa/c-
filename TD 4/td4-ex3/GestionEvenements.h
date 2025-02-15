#ifndef GESTIONEVENEMENTS_H
#define GESTIONEVENEMENTS_H

#include "Evenement.h"
#include <vector>
#include <map>

class GestionEvenements {
private:
    std::vector<Evenement> evenements;

public:
    // Ajouter un événement
    void ajouterEvenement(const Evenement &e);

    // Afficher tous les événements
    void afficherTous() const;

    // Afficher les événements d'une année donnée
    void afficherParAnnee(int annee) const;

    // Rechercher un événement par son nom
    void rechercherParNom(const std::string &nom) const;

    // Regrouper les événements par type
    void regrouperParType() const;
};

#endif // GESTIONEVENEMENTS_H
