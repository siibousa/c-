#include "Ecole.h"
#include <algorithm>

bool Ecole::idExiste(int id) {
    return std::any_of(etudiants.begin(), etudiants.end(),
                       [id](const Etudiant &e) { return e.getId() == id; });
}

void Ecole::ajouterEtudiant(const Etudiant &e) {
    if (!idExiste(e.getId())) {
        etudiants.push_back(e);
        std::cout << "[Succès] Étudiant ajouté avec succès !" << std::endl;
    } else {
        std::cout << "[Erreur] Un étudiant avec cet ID existe déjà !" << std::endl;
    }
}

void Ecole::afficherTous() const {
    if (etudiants.empty()) {
        std::cout << "[Info] Aucun étudiant enregistré." << std::endl;
        return;
    }
    std::cout << "Liste des étudiants :" << std::endl;
    for (const auto &e : etudiants) {
        e.afficher();
    }
}

void Ecole::rechercherEtudiant(int id) const {
    for (const auto &e : etudiants) {
        if (e.getId() == id) {
            std::cout << "[Succès] Étudiant trouvé :" << std::endl;
            e.afficher();
            return;
        }
    }
    std::cout << "[Erreur] Étudiant non trouvé !" << std::endl;
}

void Ecole::supprimerEtudiant(int id) {
    auto it = std::remove_if(etudiants.begin(), etudiants.end(),
                             [id](const Etudiant &e) { return e.getId() == id; });

    if (it != etudiants.end()) {
        etudiants.erase(it, etudiants.end());
        std::cout << "[Succès] Étudiant supprimé avec succès !" << std::endl;
    } else {
        std::cout << "[Erreur] Aucun étudiant avec cet ID !" << std::endl;
    }
}

void Ecole::rechercherParClasse(std::string classe) const {
    std::cout << "Étudiants de la classe " << classe << " :" << std::endl;
    bool found = false;
    for (const auto &e : etudiants) {
        if (e.getClasse() == classe) {
            e.afficher();
            found = true;
        }
    }
    if (!found) {
        std::cout << "[Info] Aucun étudiant trouvé dans cette classe." << std::endl;
    }
}
