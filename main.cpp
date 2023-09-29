#include <iostream>
using namespace std;

#include "point_nomme.h"
#include "cercle.h"
#include "heure.h"

int main() {

    /*-----------------Point-----------------*/
    /*
    point a;
    point b(1, 1);
    point * tab_p;
    int ax, ay, nb_points;

    cout << "Entrez les nouvelles coordonées (abscisse puis ordonee) : " << endl;
    cin >> ax >> ay;

    a.deplacer(ax, ay);

    if (a.a_0()){
        cout << "Le point est situe en (0, 0)." << endl;
    }else{
        cout << "Le point n'est pas situe en (0, 0)." << endl;
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
        c = new point(ax, ay);
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

    cout << "Le point le plus proche est le point " << index_min << "." << endl;

    delete[] tab_p;*/

    /*-----------------Cercle-----------------*/
    /*
    cercle c1;
    c1.afficher();

    point p1(1, 2);
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

    c2.set_centre(point(5, 6));
    c2.set_rayon(20);
    cout << "Le rayon du cercle est de " << c2.get_rayon() << " et son centre est en (" << c2.get_centre().get_abscise() << ", " << c2.get_centre().get_ordonee() << ")." << endl;

    point p3(7, 8);
    c2.set_centre(p3);
    c2.set_rayon(30);

    cout << "Le rayon du cercle est de " << c2.get_rayon() << " et son centre est en (" << c2.get_centre().get_abscise() << ", " << c2.get_centre().get_ordonee() << ")." << endl;*/

    /*-----------------Heure-----------------*/

    /*Heure h1;
    h1.afficher();*/

    /*----------------Point_Nomme------------*/

    point *p;
    int pp;
    int px, py, t;
    char *pnom;

    cout << "Voulez vous un point classique (0) ou un point nomme (1) ?" << endl << "Si votre reponse ne correspond pas ce sera un point nomme" << endl;
    cin >> pp;

    if(pp){
        cout << "Combien de caractere a le nom de votre point ?" << endl;
        cin >> t;
        pnom = new char[t];
        cout << "Entrez le nom de votre point :" << endl;
        cin >> pnom;
        p = new point_nomme(pnom, t);
        delete []pnom;
    }else{
        p = new point;
    }

    cout << "Ou voulez placer votre point ? (x puis y)" << endl;
    cin >> px >> py;

    p->deplacer(px, py);

    p->afficher();

    delete p;

    return 0;
}
