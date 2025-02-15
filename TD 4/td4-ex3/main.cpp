#include "GestionEvenements.h"

int main() {
    GestionEvenements gestion;

    // Ajouter des événements
    gestion.ajouterEvenement(Evenement(1994, "Creation de CEP Lyon", "Lyon", "culturelle"));
    gestion.ajouterEvenement(Evenement(1994, "Mort d’Ayrton Senna", "Paris", "politique"));
    gestion.ajouterEvenement(Evenement(1889, "Inauguration tour Eiffel", "Paris", "scientifique"));
    gestion.ajouterEvenement(Evenement(1953, "Naissance de John Malkovich", "Egypte", "culturelle"));
    gestion.ajouterEvenement(Evenement(1953, "Naissance de Segolene Royal", "Canada", "politique"));

    // Afficher tous les événements
    std::cout << "\n[Info] Affichage de tous les evenements :" << std::endl;
    gestion.afficherTous();

    // Afficher les événements d'une année
    std::cout << "\n[Info] evenements en 1953 :" << std::endl;
    gestion.afficherParAnnee(1953);

    // Rechercher un événement par son nom
    std::cout << "\n[Info] Recherche de 'Inauguration tour Eiffel' :" << std::endl;
    gestion.rechercherParNom("Inauguration tour Eiffel");

    // Regrouper les événements par type
    std::cout << "\n[Info] Regroupement des evenements par type :" << std::endl;
    gestion.regrouperParType();

    return 0;
}
