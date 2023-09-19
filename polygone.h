//
// Created by noah on 19/09/23.
//

#include "point.h"

#ifndef CLASS_POINT_POLYGONE_H
#define CLASS_POINT_POLYGONE_H

class polygone {
private:
    int nb_points;
    point *points = nullptr;
public:
    polygone(int snb = 0);
    ~polygone();
    /*  Role    : sasir les points du polygone
    Entrees : vide
    Sortie  : vide
     */
    void saisir();
    /*  Role    : afficher les points du polygone
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
};


#endif //CLASS_POINT_POLYGONE_H
