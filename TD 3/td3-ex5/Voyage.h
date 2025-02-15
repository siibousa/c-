#ifndef VOYAGE_H
#define VOYAGE_H

#include "Hebergement.h"
#include <string>
#include <iostream>

class Voyage {
private:
    int id;
    std::string villeOrigine;
    std::string villeDestination;
    std::string dateDepart;
    std::string dateRetour;
    float prix;
    std::string nom;
    Hebergement* hebergement; // Pointeur vers un objet Hébergement

public:
    // Constructeur
    Voyage(int id, std::string villeOrigine, std::string villeDestination,
           std::string dateDepart, std::string dateRetour, float prix, std::string nom);

    // Accesseurs
    int getId() const;
    std::string getVilleOrigine() const;
    std::string getVilleDestination() const;
    std::string getDateDepart() const;
    std::string getDateRetour() const;
    float getPrix() const;
    std::string getNom() const;
    Hebergement* getHebergement() const;

    // Modificateur
    void setHebergement(Hebergement* h);

    // Affichage des détails du voyage et de l'hébergement
    void afficherDetails() const;
};

#endif // VOYAGE_H
