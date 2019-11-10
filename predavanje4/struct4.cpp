#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Osoba {
    string ime;
    string prezime;
    int godiste;
    bool student;
};

/* void postaviStudent(Osoba o){
    o.student = true; // Ne radi dobro jer izrađuje kopiju osobe i ne dolazi do promjene
} */

void postaviStudent(Osoba* o){
    (*o).student = true;
}

void prikaziOsobu(Osoba o){
    cout << o.prezime << ", " << o.ime << ", " << o.godiste << ".";
    cout << o.student;
}

int main(){
    Osoba osoba1 = { "Hrvoje", "Horvat", 2005, false };
    prikaziOsobu(osoba1);
    //postaviStudent(osoba1);
    postaviStudent(&osoba1);
    prikaziOsobu(osoba1);
}