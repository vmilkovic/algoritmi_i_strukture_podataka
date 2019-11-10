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

int main(){
    Osoba osobe[2] = {
        { "Hrvoje", "Horvat", 2005, true },
        { "Ivan", "Ivicć", 1995, false }
    };

    cout << osobe[0].prezime << endl;
    cout << osobe[1].godiste << endl;

}