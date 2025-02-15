#include <iostream>
#include <vector>
using namespace std;

class Ouvrage {
private:
    int code;
    string titre;
    int nombreExemplaires;
    double prixUnitaire;

public:
    // Constructeur par défaut
    Ouvrage() : code(0), titre(""), nombreExemplaires(0), prixUnitaire(0.0) {}
    
    // Constructeur avec paramètres
    Ouvrage(int c, string t, int n, double p) : code(c), titre(t), nombreExemplaires(n), prixUnitaire(p) {}
    
    // Getters
    int getCode() const { return code; }
    string getTitre() const { return titre; }
    int getNombreExemplaires() const { return nombreExemplaires; }
    double getPrixUnitaire() const { return prixUnitaire; }
    
    // Méthodes
    void afficher() const {
        cout << "Code: " << code << ", Titre: " << titre
             << ", Nombre d'exemplaires: " << nombreExemplaires
             << ", Prix unitaire: " << prixUnitaire << " DT\n";
    }
    
    double totalOuvrage() const {
        return nombreExemplaires * prixUnitaire;
    }
    
    void diminuerNbExemplaires(int n) {
        if (nombreExemplaires >= n) {
            nombreExemplaires -= n;
        } else {
            cout << "Nombre d'exemplaires insuffisant.\n";
        }
    }
    
    void augmenterNbExemplaires(int n) {
        nombreExemplaires += n;
    }
};

class Bibliotheque {
private:
    vector<Ouvrage> ouvrages;
    
public:
    void afficher() const {
        for (const auto& ouvrage : ouvrages) {
            ouvrage.afficher();
            cout << "Prix total du stock: " << ouvrage.totalOuvrage() << " DT\n";
        }
    }
    
    double prixTotal() const {
        double total = 0;
        for (const auto& ouvrage : ouvrages) {
            total += ouvrage.totalOuvrage();
        }
        return total;
    }
    
    Ouvrage* rechercher(int code) {
        for (auto& ouvrage : ouvrages) {
            if (ouvrage.getCode() == code) {
                return &ouvrage;
            }
        }
        return nullptr;
    }
    
    void ajouter(const Ouvrage& ouvrage) {
        if (rechercher(ouvrage.getCode()) == nullptr) {
            ouvrages.push_back(ouvrage);
        } else {
            cout << "Ouvrage avec ce code existe deja.\n";
        }
    }
    
    void diminuerNbExp(int code, int n) {
        Ouvrage* ouvrage = rechercher(code);
        if (ouvrage) {
            ouvrage->diminuerNbExemplaires(n);
        } else {
            cout << "Ouvrage non trouve.\n";
        }
    }
    
    void augmenterNbExp(int code, int n) {
        Ouvrage* ouvrage = rechercher(code);
        if (ouvrage) {
            ouvrage->augmenterNbExemplaires(n);
        } else {
            cout << "Ouvrage non trouve.\n";
        }
    }
};

int main() {
    Bibliotheque biblio;
    
    Ouvrage o1(101, "C++ pour les debutants", 10, 25.5);
    Ouvrage o2(102, "Algorithmique avancee", 5, 40.0);
    
    biblio.ajouter(o1);
    biblio.ajouter(o2);
    
    cout << "Affichage de la bibliothèque:\n";
    biblio.afficher();
    
    cout << "\nPrix total de la bibliothèque: " << biblio.prixTotal() << " DT\n";
    
    cout << "\nRéduction des exemplaires du livre 101 de 3 unités:\n";
    biblio.diminuerNbExp(101, 3);
    biblio.afficher();
    
    cout << "\nAjout de 2 exemplaires au livre 102:\n";
    biblio.augmenterNbExp(102, 2);
    biblio.afficher();
    
    return 0;
}

