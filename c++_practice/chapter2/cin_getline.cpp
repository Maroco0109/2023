#include <iostream>
#define m 100
int main(){
    char address[m];
    std::cin.getline(address, m, '\n');
    std::cout<<address<<'\n';
}