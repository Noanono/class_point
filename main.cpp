#include <iostream>
using namespace std;

#include "point.h"

int main() {

    point a(0, 0, 'A');
    int ax, ay;

    cout << "Entrez les nouvelles coordonées (abscisse puis ordonee) : " << endl;
    cin >> ax;
    cin >> ay;

    a.deplacer(ax, ay);

    if (a.a_0()){
        cout << "Le point " << a.get_nom() << " est situe en (0, 0)." << endl;
    }else{
        cout << "Le point " << a.get_nom() << " n'est pas situe en (0, 0)." << endl;
        cout << "Ce point est situe en (" << a.get_abscise() << ", " << a.get_ordonee() << ")." << endl;
    }

    return 0;
}
