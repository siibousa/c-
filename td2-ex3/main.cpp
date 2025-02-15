#include <iostream>
#include "notes.h"

int main() {
    Notes N1(12, 10, 15, 11,17, 9.5); 
    Notes N2(11.5, 13, 18, 10,12.5); 

    float moyenne1 = N1.calculMoyenne();
    float moyenne2 = N2.calculMoyenne();

    std::cout << "Moyenne de N1 : " << moyenne1 << std::endl;
    std::cout << "Moyenne de N2 : " << moyenne2 << std::endl;

    if (moyenne1 > moyenne2) {
        std::cout << "N1 a la meilleure moyenne." << std::endl;
    } else if (moyenne2 > moyenne1) {
        std::cout << "N2 a la meilleure moyenne." << std::endl;
    } else {
        std::cout << "Les deux moyennes sont égales." << std::endl;
    }

    return 0;
}
