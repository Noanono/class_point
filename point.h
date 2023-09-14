//
// Created by noah on 09/09/23.
//

#ifndef CLASS_POINT_POINT_H
#define CLASS_POINT_POINT_H


class point {
public :
    point();
    point(int, int, char);
    /*  Role    : changer les coordonees du point
    Entrees : 2 entiers, l'abscise puis l'ordonee
    Sortie  : vide
     */
    void deplacer(int, int);
    /*  Role    : verifier si le point est situé aux coordonees 0, 0
    Entrees : vide
    Sortie  : true si le point est en 0, 0 faux sinon
     */
    bool a_0() const;
    /*  Role    : afficher les coordonees du point (x, y)
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    /*  Role    : renvoie le nom du point
    Entrees : vide
    Sortie  : 1 caractere, le nom du point
     */
    char get_nom() const;
    /*  Role    : renvoie la variable x du point
    Entrees : vide
    Sortie  : 1 entier, la variable x du point
     */
    int get_abscise() const;
    /*  Role    : renvoie la variable y du point
    Entrees : vide
    Sortie  : 1 entier, la variable y du point
     */
    int get_ordonee() const;

private :
    int x{};
    int y{};
    char nom{};

};


#endif //CLASS_POINT_POINT_H
