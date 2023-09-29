//
// Created by noah on 09/09/23.
//

#ifndef CLASS_POINT_POINT_H
#define CLASS_POINT_POINT_H


class point {
public :
    point(int =0, int =0);
    virtual ~point(); // Je met virtual pour que les pointeurs de point_nomme puissent appeler le destructeur de point_nomme
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
    virtual void afficher() const;
    /*  Role    : renvoie la distance entre le point et un autre point
    Entrees : 1 point
    Sortie  : 1 reel, la distance entre les 2 points
     */
    float distance(const point&) const;
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
    /*  Role    : modifie la variable x du point
    Entrees : 1 entier, la nouvelle variable x du point
    Sortie  : vide
     */
    void set_abscise(int);
    /*  Role    : modifie la variable y du point
    Entrees : 1 entier, la nouvelle variable y du point
    Sortie  : vide
     */
    void set_ordonee(int);

private :
    int x{};
    int y{};

};


#endif //CLASS_POINT_POINT_H
