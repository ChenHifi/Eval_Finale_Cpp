using namespace std;
#include "Boxeur.h"
#include <iostream>

int main() {

    Boxeur boxeur_1("Box_1", 75);
    cout << "Adresse de boxeur_1 : " << &boxeur_1 << ", Nom : " << boxeur_1.getNom() << ", Poids : " << boxeur_1.getPoids() << endl;

    Boxeur* boxeur_2 = new Boxeur("Box_2", 78);
    cout << "Adresse de boxeur_2 : " << &boxeur_2 << ", Nom : " << boxeur_2->getNom() << ", Poids : " << boxeur_2->getPoids() << endl;

    delete boxeur_2;

    return 0;
}
