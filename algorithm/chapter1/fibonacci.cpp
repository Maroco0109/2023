#include <iostream>

int fibonacci(int n){
    if(n <= 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<fibonacci(n)<<'\n';
}