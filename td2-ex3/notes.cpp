#include "notes.h"

Notes::Notes() : test1(0), test2(0), DS(0), Examen(0), orale(0), TP(0), avecTP(true) {}

Notes::Notes(float t1, float t2, float ds, float exam, float oral, float tp)
    : test1(t1), test2(t2), DS(ds), Examen(exam), orale(oral), TP(tp), avecTP(true) {}

Notes::Notes(float t1, float t2, float ds, float exam, float oral)
    : test1(t1), test2(t2), DS(ds), Examen(exam), orale(oral), TP(0), avecTP(false) {}

float Notes::calculNCC() const {
    return (test1 + test2 + orale + 2 * DS) / 5;
}

float Notes::calculMoyenne() const {
    float NCC = calculNCC();
    if (avecTP) {
        return 0.3 * NCC + 0.2 * TP + 0.5 * Examen;
    } else {
        return 0.4 * NCC + 0.6 * Examen;
    }
}
