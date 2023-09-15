//
// Created by noah on 15/09/23.
//
#include <iostream>
using namespace std;

#include "heure.h"

Heure::Heure() {
    heure = 0;
    minute = 0;
    seconde = 0;
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
    return abs(seconde - h.seconde);
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