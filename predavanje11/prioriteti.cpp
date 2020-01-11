#include <iostream>
#include <queue>
#include <vector>

using std::cout;
using std::endl;
using std::priority_queue;
using std::vector;

class Osoba {
    public:
        Osoba(int godina){
            this->godina = godina;
        }
        int godina;
};

struct UsporediGodine {
    bool operator()(const Osoba &o1, const Osoba &o2){
        return o1.godina < o2.godina;
    }
};

int main(){

    priority_queue<Osoba, vector<Osoba>, UsporediGodine> prioritetniRed;

    prioritetniRed.push(Osoba(20));
    prioritetniRed.push(Osoba(18));
    prioritetniRed.push(Osoba(25));
    prioritetniRed.push(Osoba(37));
    prioritetniRed.push(Osoba(19));

    cout << prioritetniRed.top().godina << endl;

    prioritetniRed.pop();

    cout << prioritetniRed.top().godina << endl;

}