//
// Created by noah on 09/09/23.
//
#include <iostream>
using namespace std;

#include "point.h"

point::point(void) = default;

point::point(int sx, int sy, char snom) {
    x = sx;
    y = sy;
    nom = snom;
}

bool point::a_0() const{
    return (x==0 && y==0);
}

char point::get_nom() const {
    return nom;
}

void point::deplacer(int nx, int ny) {
    x = nx;
    y = ny;
}

int point::get_abscise() const {
    return x;
}

int point::get_ordonee() const {
    return y;
}

void point::afficher() const {
    cout << "Le point " << nom << " est situe en (" << x << ", " << y << ")." << endl;
}

