#include <iostream>
using namespace std;

#include "point.h"
#include "cercle.h"

int main() {

    /*-----------------Point-----------------*/
    /*
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

    delete[] tab_p;*/

    /*-----------------Cercle-----------------*/

    cercle c1;
    c1.afficher();

    point p1('A', 1, 2);
    cercle c2(p1, 5);
    c2.afficher();

    cout << "Le perimetre du cercle est de " << c2.perimetre() << " et sa surface est de " << c2.surface() << "." << endl;

    c2.set_rayon(10);
    c2.afficher();

    point p2('B', 3, 4);
    c2.set_centre(p2);
    c2.afficher();

    c2.deplacer(1, 1);
    c2.afficher();

    cout << "Le rayon du cercle est de " << c2.get_rayon() << " et son centre est en (" << c2.get_centre().get_abscise() << ", " << c2.get_centre().get_ordonee() << ")." << endl;

    c2.set_centre(point('C', 5, 6));
    c2.set_rayon(20);
    cout << "Le rayon du cercle est de " << c2.get_rayon() << " et son centre est en (" << c2.get_centre().get_abscise() << ", " << c2.get_centre().get_ordonee() << ")." << endl;

    point p3('D', 7, 8);
    c2.set_centre(p3);
    c2.set_rayon(30);

    cout << "Le rayon du cercle est de " << c2.get_rayon() << " et son centre est en (" << c2.get_centre().get_abscise() << ", " << c2.get_centre().get_ordonee() << ")." << endl;

    return 0;
}
