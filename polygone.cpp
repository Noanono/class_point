//
// Created by noah on 19/09/23.
//
#include <iostream>
using namespace std;

#include "polygone.h"

polygone::polygone(int snb) {
    nb_points = snb;
    points = new point[nb_points];
}

polygone::~polygone() {
    delete[] points;
    cout << "la polygone a ete detruit" << endl;
}

void polygone::saisir() {
    if(nb_points == 0){
        delete[] points;
        cout << "combien de points voulez vous creer ?" << endl;
        cin >> nb_points;
        points = new point[nb_points];
    }
    for(int i = 0; i < nb_points; i++){
        point * c;
        int ax, ay;
        char nom;
        cout << "Entrez les coordonées du point (abscisse puis ordonee) : " << endl;
        cin >> ax >> ay;
        nom = (char)(i+1);
        c = new point(nom, ax, ay);
        points[i] = *c;
        delete c;
    }

}

void polygone::afficher() const {
    for(int i = 0; i < nb_points; i++){
        points[i].afficher();
    }
}
