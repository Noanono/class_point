//
// Created by noah on 15/09/23.
//
#include <iostream>
#include <cmath>
using namespace std;

#include "cercle.h"

cercle::cercle() {
    centre = point();
    rayon = 0;
}

cercle::cercle(point &sa, float sr) {
    centre = sa;
    rayon = sr;
}

cercle::~cercle() {
    cout << "Le cercle a ete detruit." << endl;
}

void cercle::afficher() const {
    cout << "Le centre du cercle est en (" << centre.get_abscise() << ", " << centre.get_ordonee() << ") et a un rayon de " << rayon << "." << endl;
}

float cercle::perimetre() const {
    return 2.0 * M_PI * rayon;
}

float cercle::surface() const {
    return M_PI * pow(rayon, 2);
}

void cercle::set_rayon(float sr) {
    rayon = sr;
}

void cercle::set_centre(point sa) {
    centre = sa;
}

float cercle::get_rayon() const {
    return rayon;
}

point cercle::get_centre() const {
    return centre;
}

void cercle::deplacer(int sx, int sy) {
    centre.deplacer(sx, sy);
}
