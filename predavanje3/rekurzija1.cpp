#include <iostream>

int ispisi(int n){
    std::cout << n;
    if(n>0){
        ispisi(n-1);
    }
}

int main(){
    ispisi(5);
};