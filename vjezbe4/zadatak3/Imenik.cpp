#include "Imenik.hpp"
#include <iostream>
#include <vector>

using std::vector;

// Ovo je constructor
void Imenik::Imenik( string csv){

}

void Imenik::unos(string ime, string prezime, string broj) {
    osobe.push_back({ ime, prezime, broj });
}
void Imenik::unos(Osoba osoba) {
    osobe.push_back(osoba);
}
void Imenik::prikaz() {
    for (int i = 0; i < osobe.size(); i++) {
        std::cout << osobe[i].ime << " " << osobe[i].prezime << " " << osobe[i].broj << std::endl;
    }
    /*for (auto it = osobe.begin(); it != osobe.end(); it++) {
        std::cout << it->ime << " " << it->prezime;
    }*/
}
Osoba Imenik::pretrazi(string broj) {
    for (int i = 0; i < osobe.size(); i++) {
        if (osobe[i].broj == broj) {
            return osobe[i];
        }
    }
    return { "", "", "" };
}