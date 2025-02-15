#ifndef NOTES_H
#define NOTES_H

#include <iostream>
using namespace std;

class Notes {
private:
    float test1, test2, DS, Examen, orale, TP;
    bool avecTP;

    float calculNCC() const; // Private method for NCC calculation

public:
    // Default constructor
    Notes();

    // Constructor with TP
    Notes(float t1, float t2, float ds, float exam, float orale, float tp);

    // Constructor without TP
    Notes(float t1, float t2, float ds, float exam, float orale);

    // Method to calculate the final grade
    float calculMoyenne() const;
};

#endif
