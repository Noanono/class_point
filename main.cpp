#include <iostream>
using namespace std;

#include "point.h"

int main() {

    point a('A');
    point b('B', 1, 1);
    point * tab_p;
    char nom;
    int ax, ay, nb_points;

    cout << "Entrez les nouvelles coordonées (abscisse puis ordonee) : " << endl;
    cin >> ax >> ay;

    a.deplacer(ax, ay);

    if (a.a_0()){
        cout << "Le point " << a.get_nom() << " est situe en (0, 0)." << endl;
    }else{
        cout << "Le point " << a.get_nom() << " n'est pas situe en (0, 0)." << endl;
        a.afficher();
    }

    cout << "La distance entre les points " << a.get_nom() << " et " << b.get_nom() << " est de " << a.distance(b) << "." << endl;

    cout << "combien de points voulez vous creer ?" << endl;
    cin >> nb_points;

    tab_p = new point[nb_points];

    for (int i = 0; i < nb_points; i++){
        point * c;
        cout << "Entrez les coordonées du point (abscisse puis ordonee) : " << endl;
        cin >> ax >> ay;
        cout << "Entrez le nom du point : " << endl;
        cin >> nom;
        c = new point(nom, ax, ay);
        tab_p[i] = *c;
        delete c;
    }

    float dist_min = tab_p->distance(tab_p[1]);
    int index_min = 1;
    for (int i = 2; i < nb_points; i++){
        if (tab_p->distance(tab_p[i]) < dist_min){
            dist_min = tab_p->distance(tab_p[i]);
            index_min = i;
        }
    }

    cout << "Le point le plus proche du point " << tab_p[0].get_nom() << " est le point " << tab_p[index_min].get_nom() << "." << endl;

    delete[] tab_p;

    return 0;
}
