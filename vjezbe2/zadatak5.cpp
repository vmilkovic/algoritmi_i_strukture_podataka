#include <iostream>

int br_znam( int n ){

    if( n == 0 ){
        return 0;
    } else {

        return 1 + br_znam( n / 10);

    }

}

int main(){

    std::cout << br_znam(12345);
}