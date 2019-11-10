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
    Osoba osoba1 = { "Hrvoje", "Horvat", 2005, true };
    Osoba osoba2 = { "Ivan", "Ivicć", 1995, false };
    cout << osoba1.prezime << endl;
    cout << osoba2.godiste << endl;

}