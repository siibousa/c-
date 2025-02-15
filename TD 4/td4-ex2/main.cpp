#include "Ecole.h"

int main() {
    Ecole ecole;

    std::cout << "[Info] Ajout d'étudiants..." << std::endl;
    ecole.ajouterEtudiant(Etudiant("Yassine Besbes", "monastir", "1A", "29/05/200", 101));
    ecole.ajouterEtudiant(Etudiant("Azer Naouar", "monastir", "1B", "22/07/2003", 102));
    ecole.ajouterEtudiant(Etudiant("Jasser Arouaad", "monastir", "1A", "05/11/2004", 103));

    // Essayer d'ajouter un étudiant avec un ID déjà existant
    ecole.ajouterEtudiant(Etudiant("Alice Dupont", "10 rue A", "1A", "12/05/2004", 101));

    std::cout << "\n[Info] Affichage de tous les étudiants :" << std::endl;
    ecole.afficherTous();

    std::cout << "\n[Info] Recherche d'un étudiant (ID: 102) :" << std::endl;
    ecole.rechercherEtudiant(102);

    std::cout << "\n[Info] Suppression de l'étudiant (ID: 102) :" << std::endl;
    ecole.supprimerEtudiant(102);
    ecole.afficherTous();

    std::cout << "\n[Info] Recherche d'étudiants de la classe '1A' :" << std::endl;
    ecole.rechercherParClasse("1A");

    return 0;
}
