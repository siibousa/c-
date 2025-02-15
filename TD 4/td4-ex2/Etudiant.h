#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
#include <string>

class Etudiant {
private:
    std::string nom;
    std::string adresse;
    std::string classe;
    std::string dateNaissance;
    int id;

public:
    // Constructeur
    Etudiant(std::string nom, std::string adresse, std::string classe, std::string dateNaissance, int id);

    // Afficher les informations
    void afficher() const;

    // Getters
    int getId() const;
    std::string getClasse() const;
};

#endif // ETUDIANT_H
