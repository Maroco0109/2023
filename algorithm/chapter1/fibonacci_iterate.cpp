#include <iostream>
int fibonacci(int n){
    int fib[99];
    fib[0] = 0;
    if(n>0){
        fib[1]=1;
        for(int i = 2; i<=n; i++)
            fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<fibonacci(n)<<'\n';
}