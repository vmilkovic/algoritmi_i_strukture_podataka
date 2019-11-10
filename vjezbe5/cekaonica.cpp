#include <iostream>
#include <list>
#include <string>

using std::list;
using std::string;

struct Osoba {
    int redniBroj;
    string ime;
    string prezime;
};

class Cekaonica {
public:
    Cekaonica() {
        trenutni = 1;
    }
    void dodajNaCekanje(string ime, string prezime) {
        osobe.push_back({ trenutni++, ime, prezime });
    }
    void tkoCeka() {
        /*for (Osoba osoba : osobe) {
            std::cout << osoba.redniBroj << " " << osoba.ime << " " << osoba.prezime << std::endl;
        }*/

        for (auto it = osobe.begin(); it != osobe.end(); it++) {
            it->ime;
        }
    }
    Osoba* sljedeci() {
        if (osobe.size() > 0) {
            return &osobe.front();
        }
        return nullptr;
    }
    Osoba preuzmiSljedeceg() {
        if (osobe.size() > 0) {
            Osoba o = osobe.front();
            osobe.pop_front();
            return o;
        }
        return { -1, "", "" };
        // exception
    }
private:
    list<Osoba> osobe;
    int trenutni;
};

int main()
{
    Cekaonica cek;
    /*cek.dodajNaCekanje("Nina1", "Badric");
    cek.dodajNaCekanje("Nina2", "Badric");
    cek.dodajNaCekanje("Nina3", "Badric");*/

    Osoba naRedu = cek.preuzmiSljedeceg();
    std::cout << naRedu.ime << std::endl;

    cek.tkoCeka();

}