//
// Created by noah on 15/09/23.
//

#include "point.h"

#ifndef CLASS_POINT_CERCLE_H
#define CLASS_POINT_CERCLE_H


class cercle {
private:
    point centre;
    float rayon;
public:
    cercle();
    cercle(point&, float);
    ~cercle();
    /*  Role    : deplacer le cercle
    Entrees : 2 entiers, le deplacement en x puis en y
    Sortie  : vide
     */
    void deplacer(int, int);
    /*  Role    : afficher les coordonees du point (x, y) et le rayon du cercle
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    /*  Role    : renvoie le perimetre du cercle
    Entrees : vide
    Sortie  : 1 reel, le perimetre du cercle
     */
    float perimetre() const;
    /*  Role    : renvoie la surface du cercle
    Entrees : vide
    Sortie  : 1 reel, la surface du cercle
     */
    float surface() const;
    /*  Role    : modifie le rayon du cercle
    Entrees : 1 reel, le nouveau rayon du cercle
    Sortie  : vide
     */
    void set_rayon(float);
    /*  Role    : modifie le centre du cercle
    Entrees : 1 point, le nouveau centre du cercle
    Sortie  : vide
     */
    void set_centre(point);
    /*  Role    : renvoie le rayon du cercle
    Entrees : vide
    Sortie  : 1 reel, le rayon du cercle
     */
    float get_rayon() const;
    /*  Role    : renvoie le centre du cercle
    Entrees : vide
    Sortie  : 1 point, le centre du cercle
     */
    point get_centre() const;
};


#endif //CLASS_POINT_CERCLE_H
