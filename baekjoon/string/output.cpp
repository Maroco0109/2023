/* 백준 11718
입력 받은 대로 출력하는 프로그램
*/
#include<iostream>
#include<string>

int main(){
    std::string s;
    for(int i=0; i<100; i++){
        std::getline(std::cin,s);
        std::cout<<s<<'\n';
    }
}
