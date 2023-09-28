//
// Created by noah on 09/09/23.
//
#include <iostream>
#include <cmath>
using namespace std;

#include "point.h"

point::point(int sx, int sy) {
    x = sx;
    y = sy;
}

bool point::a_0() const{
    return (x==0 && y==0);
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
    cout << "Le point est situe en (" << x << ", " << y << ")." << endl;
}

point::~point() {
    cout << "Le point a ete detruit." << endl;
}

float point::distance(const point &p) const {
    return sqrt(pow(x - p.get_abscise(), 2) + pow(y - p.get_ordonee(), 2));
}

void point::set_ordonee(int sy) {
    y = sy;
}

void point::set_abscise(int sx) {
    x = sx;
}
