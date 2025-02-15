#include "Voyage.h"
#include "Hebergement.h"

int main() {
    // Création des hébergements
    Hebergement hebergement1("Boulevard de la Promenade, 8050 Hammamet, Tunisie", 5, "Yasmine Beach");
    Hebergement hebergement2("BP437 / Hammamet 8050 / Tunisie", 2, "La Badira Hammamet");

    // Création d'un voyage
    Voyage voyage(1, "Paris", "Hammamet", "2023-07-01", "2023-07-15", 1500.0f, "Sejour a Hammamet");

    // Affectation d'un hébergement au voyage
    voyage.setHebergement(&hebergement1);

    // Affichage des détails du voyage avec son hébergement
    std::cout << "Details du voyage avant modification des etoiles :\n";
    voyage.afficherDetails();

    // Modification du nombre d'étoiles de l'hébergement
    voyage.getHebergement()->setNbEtoiles(1);

    // Affichage des détails après modification
    std::cout << "\nDetails du voyage apres modification des etoiles :\n";
    voyage.afficherDetails();

    return 0;
}
