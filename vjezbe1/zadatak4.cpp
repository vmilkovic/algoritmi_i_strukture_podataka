#include <iostream>

using std::cout;

int suma2( int n ){

    if( n < 0 ){

        return 0;

    } else {

        /*
        if( n % 2 == 0){
            return n + suma2( n - 1 );
        } else {
            return suma2( n - 1 );
        } */

        return n / 2 + suma2( n - 1 );


    }

}

int main(){

    cout << suma2(5);

}