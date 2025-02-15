#ifndef NOTES_H
#define NOTES_H

class Notes {
private:
    float test1;
    float test2;
    float DS;
    float Examen;
    float orale;
    float TP;
    bool avecTP;

    float calculNCC() const; 

public:
    Notes();
    Notes(float t1, float t2, float ds, float exam, float oral, float tp);
    Notes(float t1, float t2, float ds, float exam, float oral);

    float calculMoyenne() const;
};

#endif
