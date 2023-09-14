//
// Created by noah on 09/09/23.
//
#include <iostream>
#include <cmath>
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

float distance(const point& p1, const point& p2) {
    return sqrt(pow(p2.get_abscise() - p1.get_abscise(), 2) + pow(p2.get_ordonee() - p1.get_ordonee(), 2));
}