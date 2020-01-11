#include <iostream>
#include <queue>
#include <string>

using std::queue;
using std::cout;
using std::endl;
using std::string;

struct Osoba {
    string ime;
    string prezime;
};

int main(){
    queue<int> red;

    red.push(5);
    red.push(6);
    red.push(7);

    cout << red.front() << endl;
    cout << red.back() << endl;

    red.push(8);
    red.pop();
    red.push(9);

    cout << red.front() << endl;
    cout << red.back() << endl;

    queue<Osoba> ambulanta;
    ambulanta.push({"Nina", "Badric"});
    ambulanta.push({"Tonci", "Huljic"});
    ambulanta.push({"Petar", "Graso"});

    cout << "Na redu: " << ambulanta.front().prezime << endl;
    ambulanta.pop();

    cout << "Na redu " << ambulanta.front().prezime << endl;
}