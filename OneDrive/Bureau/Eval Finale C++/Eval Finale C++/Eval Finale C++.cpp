using namespace std;
#include "Boxeur.h"
#include <iostream>

int main() {
    Boxeur obj("Mat", 78);
    cout << "Nom : " << obj.getNom() << ", Poids : " << obj.getPoids() << endl;

    obj.setPoids(75);
    cout << "Nouveau poids : " << obj.getPoids() << endl;

    return 0;
}
