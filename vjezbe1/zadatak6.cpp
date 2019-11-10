#include <iostream>

int zbroj_znam( int n ){

    if( n == 0 ){
        return 0;
    } else {

         return n % 10 + zbroj_znam( n / 10);

    }

}

int main(){

     std::cout <<  zbroj_znam(329);

}