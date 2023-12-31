//
// Created by noah on 28/09/23.
//

#include "point.h"

#ifndef CLASS_POINT_POINT_NOMME_H
#define CLASS_POINT_POINT_NOMME_H


class point_nomme : public point {
private:
    char *nom;
    int taille_nom;

public:
    point_nomme();
    point_nomme(char*, int =1);
    ~point_nomme();
    /*  Role    : Afficher le point
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    void set_nom(char*, int =1);

};


#endif //CLASS_POINT_POINT_NOMME_H
