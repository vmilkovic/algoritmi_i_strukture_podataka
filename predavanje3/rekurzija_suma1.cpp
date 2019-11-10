#include <iostream>

int suma(int n){
    if(n==0){
        return 0;
    }
    return n+suma(n-1);
}

int main(){
    std::cout << suma(5);
}