#include "Boxeur.h"
#include <iostream>
using namespace std;


Boxeur::Boxeur(const string& nom, double poids) : nom(nom), poids(poids) {
    cout << "Constructeur appelé. Nom : " << nom << ", Poids : " << poids << endl;
}

const string& Boxeur::getNom() const {
    return nom;
}

double Boxeur::getPoids() const {
    return poids;
}

void Boxeur::setPoids(double Npoids) {
    poids = Npoids;
}
