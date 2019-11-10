#include <iostream>

int faktorijela(int n){
    if(n==1){
        return 1;
    }
    return n * faktorijela(n-1);
}

int main(){
    std::cout << faktorijela(5);
}