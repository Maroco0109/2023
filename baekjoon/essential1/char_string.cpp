// 단어 S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.
// input: 첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 1000이다.
//        둘째 줄에 정수 i가 주어진다(1<=i<=|S|)
#include<iostream>
#include<string>
int main(){
    std::string s;
    int i;
    while(1){
        std::cin>>s;
        std::cin>>i;
        if(s.length()<=1000&&i>=1&&i<=s.length())
            break;
    }
    std::cout<<s.at(i-1)<<'\n';
}