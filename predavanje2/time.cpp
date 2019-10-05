#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main(void){

    time_point<high_resolution_clock> t1 = high_resolution_clock::now();

    long long s = 0;

    for (int i = 0; i < 1720000000; i++) {
        s += i;
    }

    time_point<high_resolution_clock> t2 = high_resolution_clock::now();

    milliseconds ms = duration_cast<milliseconds>(t2 - t1);

    long long trajanje = ms.count();

    cout << "Trajanje: " << trajanje << " ms" << endl;

}