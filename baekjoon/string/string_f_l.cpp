/* 백준 9086
문자열의 제일 첫글자, 마지막 글자 출력
*/

#include<iostream>
#include<string>

int main(){
    std::string s;
    int t;
    std::cin>>t;
    for(int i=0; i<t;i++){
        std::cin>>s;
        std::cout<<s.front()<<s.back()<<'\n';
    }

}