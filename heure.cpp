//
// Created by noah on 15/09/23.
//
#include <iostream>
#include <ctime>
using namespace std;

#include "heure.h"

Heure Heure::operator+(const Heure &h) const {
    Heure res;
    res.set_seconde(seconde + h.get_seconde());
    res.set_minute(minute + h.get_minute() + (seconde + h.get_seconde() - res.get_seconde())/60);
    res.set_heure(heure + h.get_heure() + (minute + h.get_minute() - res.get_minute())/60 + ((seconde + h.get_seconde() - res.get_seconde())/60 - res.get_minute())/60);
    return res;
}

Heure::Heure() {
    time_t now = time(0); //reccupere la difference de temps en secondes depuis 1970
    tm *ltm = localtime(&now); //convertit en heure locale
    heure = ltm->tm_hour; //reccupere l'heure de la conversion
    minute = ltm->tm_min; //reccupere les minutes de la conversion
    seconde = ltm->tm_sec; //reccupere les secondes de la conversion
}

Heure::Heure(int sh, int sm, int ss) {
    int sec_trop = 0;
    seconde = ss%60;
    sec_trop = (ss - seconde)/60;
    minute = (sm + sec_trop)%60;
    heure = (sh + (sm - minute)/60 + (sec_trop - minute)/60 )%24;
}

Heure::~Heure() {
    cout << "L'heure a ete detruite." << endl;
}

void Heure::afficher() const {
    cout << "Il est " << heure << ":" << minute << ":" << seconde << "." << endl;
}

int Heure::diff(const Heure &h) const {
    return abs(heure*3600+minute*60+seconde - h.get_heure()*3600+h.get_minute()*60+h.get_seconde());
}

void Heure::set_heure(int sh) {
    heure = sh%24;
}

void Heure::set_minute(int sm) {
    minute = sm%60;
}

void Heure::set_seconde(int ss) {
    seconde = ss%60;
}

int Heure::get_heure() const {
    return heure;
}

int Heure::get_minute() const {
    return minute;
}

int Heure::get_seconde() const {
    return seconde;
}