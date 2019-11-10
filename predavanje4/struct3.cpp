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

void prikaziOsobu(Osoba o){
    cout << o.prezime << ", " << o.ime << ", " << o.godiste << ".";
}

int main(){
    Osoba osoba1 = { "Hrvoje", "Horvat", 2005, true };
    prikaziOsobu(osoba1);
}