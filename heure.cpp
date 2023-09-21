//
// Created by noah on 15/09/23.
//
#include <iostream>
#include <ctime>
using namespace std;

#include "heure.h"

Heure::Heure() {
    time_t now = time(0); //reccupere la difference de temps en secondes depuis 1970
    tm *ltm = localtime(&now); //convertit en heure locale
    heure = ltm->tm_hour; //reccupere l'heure de la conversion
    minute = ltm->tm_min; //reccupere les minutes de la conversion
    seconde = ltm->tm_sec; //reccupere les secondes de la conversion
}

Heure::Heure(int sh, int sm, int ss) {
    heure = sh;
    minute = sm;
    seconde = ss;
}

Heure::~Heure() {
    cout << "L'heure a ete detruite." << endl;
}

void Heure::afficher() const {
    cout << "Il est " << heure << ":" << minute << ":" << seconde << "." << endl;
}

void Heure::conv_hs() {
    seconde += minute * 60 + heure * 3600;
    minute = 0;
    heure = 0;
}

void Heure::conv_sh() {
    heure += seconde / 3600;
    minute += (seconde - seconde / 3600) / 60;
    seconde = 0;
}

int Heure::diff(const Heure &h) const {
    return abs(heure*3600+minute*60+seconde - h.get_heure()*3600+h.get_minute()*60+h.get_seconde());
}

void Heure::set_heure(int sh) {
    heure = sh;
}

void Heure::set_minute(int sm) {
    minute = sm;
}

void Heure::set_seconde(int ss) {
    seconde = ss;
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