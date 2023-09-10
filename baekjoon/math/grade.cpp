/* 백준 25206
input: 과목명 학점 등급
output: 전공평점
*/

#include<iostream>
#include<string>

int main(){
    std::string subject, grade;
    double credit, temp;
    double sumCredit = 0.0;
    double res = 0.0;
    
    for(int i=0; i<20;i++){
        std::cin>>subject>>credit>>grade;
        if(grade == "P")    continue;
        sumCredit+=credit;
        if(grade == "F")    continue;

        if(grade[0]=='A')   temp=4.0;
        else if(grade[0]=='B')  temp=3.0;
        else if(grade[0]=='C')  temp=2.0;
        else if(grade[0]=='D')  temp=1.0;

        if(grade[1]=='+')   temp=temp+0.5;

        res += credit*temp;
    }
    std::cout<<res/sumCredit;
    return 0;
}