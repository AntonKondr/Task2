#pragma once

#include "catch.hpp"

extern char nazev_ukolu[255];
extern double a;   // zrychlení
extern double v0;  // poèáteèní rychlost
extern double v1;  // výsledná rychlost
extern double t0;  // poèáteèní èas
extern double t;   // koneèný èas
extern double s;   // dráha
extern double v;   // rychlost	
extern double pomer;   // pomìr rychlostí
extern int typPohybu; // typ pohybu

int kinematika(double v0, double v1, double t0, double t);  
// inicializace funkce kinematika, ktera je volana v mainu
int intro(float v0_p, float v1_p, float t0_p, float t_p);
// zadani dat
void note();
// jen predstaveni
