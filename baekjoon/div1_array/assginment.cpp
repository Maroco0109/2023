/* 백준 5597
학생 30명(index 1 ~ 30)
과제 28명 제출
제출 안 한 2명의 출석번호 출력
*/
#include<iostream>
#include<vector>
int main(){
    int number;
    std::vector<bool> student(31, false);
    for(int t=1;t<=28;t++){
        std::cin>>number;
        student[number]=true;
    }
    for(int t=1;t<=30;t++)
        if(student[t]==false)
            std::cout<<t<<'\n';
}