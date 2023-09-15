//
// Created by noah on 15/09/23.
//

#ifndef CLASS_POINT_HEURE_H
#define CLASS_POINT_HEURE_H


class Heure {
private:
    int heure;
    int minute;
    int seconde;

public:
    Heure();
    Heure(int, int, int);
    ~Heure();
    /*  Role    : afficher l'heure au format hh:mm:ss
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    /*  Role    : convertir les heures en secondes
    Entrees : vide
    Sortie  : vide
     */
    void conv_hs();
    /*  Role    : convertir les secondes en heures
    Entrees : vide
    Sortie  : vide
     */
    void conv_sh();
    /*  Role    : renvoyer en seconde la difference de temp avec une autre heure
    Entrees : 1 heure
    Sortie  : 1 entier, la difference de temps en seconde
     */
    int diff(const Heure&) const;
    /*  Role    : modifier l'heure
    Entrees : 1 entiers, l'heure
    Sortie  : vide
     */
    void set_heure(int);
    /*  Role    : modifier les minutes
    Entrees : 1 entier, les minutes
    Sortie  : vide
     */
    void set_minute(int);
    /*  Role    : modifier les secondes
    Entrees : 1 entier, les secondes
    Sortie  : vide
     */
    void set_seconde(int);
    /*  Role    : renvoyer l'heure
    Entrees : vide
    Sortie  : 1 entiers, l'heure
     */
    int get_heure() const;
    /*  Role    : modifier les minutes
    Entrees : vide
    Sortie  : 1 entiers, les minutes
     */
    int get_minute() const;
    /*  Role    : renvoyer les secondes
    Entrees : vide
    Sortie  : 1 entiers, les secondes
     */
    int get_seconde() const;

};


#endif //CLASS_POINT_HEURE_H
