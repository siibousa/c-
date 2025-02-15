#include "notes.h"

// Default constructor initializing all grades to 0 and avecTP to true
Notes::Notes() : test1(0), test2(0), DS(0), Examen(0), orale(0), TP(0), avecTP(true) {
    cout << "Creation d'un objet Notes avec des valeurs par defaut.\n";
}

// Constructor including TP
Notes::Notes(float t1, float t2, float ds, float exam, float orale, float tp)
    : test1(t1), test2(t2), DS(ds), Examen(exam), orale(orale), TP(tp), avecTP(true) {
    cout << "Creation d'un objet Notes avec TP.\n";
}

// Constructor without TP
Notes::Notes(float t1, float t2, float ds, float exam, float orale)
    : test1(t1), test2(t2), DS(ds), Examen(exam), orale(orale), TP(0), avecTP(false) {
    cout << "Creation d'un objet Notes sans TP.\n";
}

// Private method to calculate NCC
float Notes::calculNCC() const {
    return (test1 + test2 + orale + 2 * DS) / 5;
}

// Public method to calculate the final grade
float Notes::calculMoyenne() const {
    float NCC = calculNCC();
    float moyenne = avecTP ? (0.3 * NCC + 0.2 * TP + 0.5 * Examen) : (0.4 * NCC + 0.6 * Examen);
    cout << "Calcul de la moyenne: " << moyenne << "\n";
    return moyenne;
}
