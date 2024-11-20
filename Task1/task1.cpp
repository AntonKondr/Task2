#include <stdio.h>
#include <math.h>

char nazev_ukolu[255];
int uvod = 1;
const double s0 = 0.0;
double v0, v1, t0, t, a, s, v, pomer;
int typPohybu;

void note() {
    if (uvod == 1) {
        uvod = 0;
        printf("Kinematika - program pro vypocet rovnomerne zrychleneho pohybu.\n\n");
        printf("jmeno: Darius Xerxes\n");
        printf("login: dxerxes\n");
        printf("datum plneni ukolu: 26.11.2021\n\n");
        sprintf(nazev_ukolu, "nazev ukolu: ZSP - Domaci ukol c. 2 - \"Kinematika\"\n\n");
        printf("%s", nazev_ukolu);
    }
}

int intro(float v0_p, float v1_p, float t0_p, float t_p) {
    v0 = v0_p;
    v1 = v1_p;
    t0 = t0_p;
    t = t_p;

    if (v0 < 0) {
        printf("Vstupni hodnoty nejsou platne. Hodnoty nesmi byt zapornymi cisly.\n");
        printf("Uspesne neprovedeno.\n");
        return -1;
    }
    if (v1 < 0) {
        printf("Vstupni hodnoty nejsou platne. Hodnoty nesmi byt zapornymi cisly.\n");
        printf("Uspesne neprovedeno.\n");
        return -2;
    }
    if (t0 <= 0) {
        printf("Vstupni hodnoty nejsou platne. Hodnoty nesmi byt zapornymi cisly.\n");
        printf("Uspesne neprovedeno.\n");
        return -3;
    }
    if (t < 0) {
        printf("Vstupni hodnoty nejsou platne. Hodnoty nesmi byt zapornymi cisly.\n");
        printf("Uspesne neprovedeno.\n");
        return -4;
    }

    return 0;
}

void kinematika_vypocet() {
    a = (v1 - v0) / t0;
    v = v0 + a * t;
    s = s0 + v0 * t + 0.5 * a * t * t;
    pomer = v1 / v0;

    if (a > 0)
        typPohybu = 3;
    else if (a < 0)
        typPohybu = 1;
    else
        typPohybu = 2;
}

void kinematika_vypisPohybu() {
    if (typPohybu == 1)
        printf("Pohyb je rovnomerne zpomaleny.\n");
    else if (typPohybu == 2)
        printf("Pohyb je konstantni.\n");
    else if (typPohybu == 3)
        printf("Pohyb je rovnomerne zrychleny.\n");
}

void kinematika_vypisTabulky() {
    printf("\nTabulka vysledku\n");
    printf("v0: %.2f km/h\n", v0);
    printf("v1: %.2f km/h\n", v1);
    printf("t0: %.2f h\n", t0);
    printf("t: %.2f h\n", t);
    printf("a: %.2f km/h^2\n", a);
    printf("v: %.2f km/h\n", v);
    printf("s: %.2f km\n", s);
    printf("pomer v: %.2f%%\n", pomer * 100);
}

int kinematika() {
    note();
    kinematika_vypocet();
    kinematika_vypisPohybu();
    kinematika_vypisTabulky();
    return 0;
}

int main() {
    int result = intro(85.0, 125.0, 0.5, 2.5);

    if (result == 0) {
        kinematika();
    } else {
        printf("Program skoncilo s chybou. Kod chyby: %d\n", result);
    }

    return 0;
}
