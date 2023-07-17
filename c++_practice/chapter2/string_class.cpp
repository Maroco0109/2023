#include <iostream>
#include <string>

int main(){
    std::string song("Don't look back in anger");
    std::string singer("Oasis");
    std::string input;
    std::cout<<song<<" 을 부른 가수는?: ";
    getline(std::cin, input);
    if(input == singer)
        std::cout<<"Correct!"<<'\n';
    else
        std::cout<<"The answer is "<<singer<<'\n';
}