//
// Created by noah on 28/09/23.
//
#include <iostream>
using namespace std;

#include "point_nomme.h"

point_nomme::point_nomme(){
    nom = nullptr;
}

point_nomme::point_nomme(char *snom, int t){
    nom = new char[t];
    nom = snom;
}

point_nomme::~point_nomme(){
    cout << "Le point nomme a ete detruit" << endl;
}

void point_nomme::afficher() const {
    cout << "Le nom du point est : " << &nom << endl;
    point::afficher();
}
