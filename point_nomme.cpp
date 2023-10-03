//
// Created by noah on 28/09/23.
//
#include <iostream>
using namespace std;

#include "point_nomme.h"

point_nomme::point_nomme(){
    nom = nullptr;
    taille_nom = 0;
}

point_nomme::point_nomme(char *snom, int t){
    nom = new char[t];
    for(int i = 0; i < t; i++){
        nom[i] = snom[i];
    }
    taille_nom = t;
}

point_nomme::~point_nomme(){
    delete []nom;
    cout << "Le point nomme a ete detruit" << endl;
}

void point_nomme::afficher() const {
    cout << "Le nom du point est : ";
    for(int i =0; i < taille_nom; i++){
        cout << nom[i];
    }
    cout << endl;
    point::afficher();
}

void point_nomme::set_nom(char *snom, int t) {
    delete []nom;
    nom = new char[t];
    for(int i = 0; i < t; i++){
        nom[i] = snom[i];
    }
    taille_nom = t;
}