#include "GestionEvenements.h"
#include <algorithm>

void GestionEvenements::ajouterEvenement(const Evenement &e) {
    evenements.push_back(e);
    std::sort(evenements.begin(), evenements.end()); // Trie par année
    std::cout << "[Succes] evenement ajoute !" << std::endl;
}

void GestionEvenements::afficherTous() const {
    if (evenements.empty()) {
        std::cout << "[Info] Aucun evenement enregistre." << std::endl;
        return;
    }
    std::cout << "Liste des evenements :" << std::endl;
    for (const auto &e : evenements) {
        e.afficher();
    }
}

void GestionEvenements::afficherParAnnee(int annee) const {
    bool found = false;
    for (const auto &e : evenements) {
        if (e.getAnnee() == annee) {
            e.afficher();
            found = true;
        }
    }
    if (!found) {
        std::cout << "[Info] Aucun evenement trouve pour l'annee " << annee << "." << std::endl;
    }
}

void GestionEvenements::rechercherParNom(const std::string &nom) const {
    for (const auto &e : evenements) {
        if (e.getNom() == nom) {
            std::cout << "[Succes] evenement trouve :" << std::endl;
            e.afficher();
            return;
        }
    }
    std::cout << "[Erreur] Aucun evenement trouvé avec ce nom." << std::endl;
}

void GestionEvenements::regrouperParType() const {
    std::map<std::string, std::vector<Evenement>> groupes;

    for (const auto &e : evenements) {
        groupes[e.getType()].push_back(e);
    }

    for (const auto &g : groupes) {
        std::cout << "\nType : " << g.first << std::endl;
        for (const auto &e : g.second) {
            e.afficher();
        }
    }
}
