#include <iostream>

int ispisi(int n){
    if(n > 0){
        ispisi(n-1);
    }
    std::cout << n;
}

int main(){
    ispisi(5);
}