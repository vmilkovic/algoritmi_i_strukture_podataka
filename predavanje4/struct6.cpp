#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct BankovniRacun {
    string swift;
    string iban;
};

struct Osoba {
    string ime;
    string prezime;
    int godiste;
    bool student;
    BankovniRacun racun;
};

int main(){
    Osoba osoba1 = {"Hrvoje", "Horvat", 2005, true, {"PBZGHR2X", "HR234000"} };
    cout << osoba1.racun.iban;
}