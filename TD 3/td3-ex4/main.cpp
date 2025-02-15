#include "notes.h"

int main() {
    cout << "Debut du programme...\n";

    // Creating objects
    Notes N1(10, 12, 15, 11, 17, 9.5);
    Notes N2(11.5, 13, 18, 10, 12.5);

    // Calculating averages
    float moyenneN1 = N1.calculMoyenne();
    float moyenneN2 = N2.calculMoyenne();

    // Displaying results
    cout << "Moyenne de N1: " << moyenneN1 << endl;
    cout << "Moyenne de N2: " << moyenneN2 << endl;
    
    // Finding and displaying the highest average
    if (moyenneN1 > moyenneN2) {
        cout << "N1 a la plus grande moyenne: " << moyenneN1 << endl;
    } else {
        cout << "N2 a la plus grande moyenne: " << moyenneN2 << endl;
    }

    cout << "Fin du programme.\n";
    return 0;
}
