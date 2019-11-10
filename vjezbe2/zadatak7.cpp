#include <iostream>

int prikazi_polje( int polje[], int n){

    if ( n <= 0 ){
      return 0;
    }

    return prikazi_polje(polje, n-1) + polje[n-1];
}

int main(){
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << prikazi_polje(array, 5);
}