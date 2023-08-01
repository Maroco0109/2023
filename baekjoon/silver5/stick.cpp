// 1094번 막대
/* 코딩 구현
64는 32+32, 32는 16+16, 16은 8+8. 8은 4+4, 4는 2+2, 1는 1+1로 자를 수 있음
주어진 X값을 채울 수 있는 경우의 수
*/
#include<iostream>
int main(){
    int stick=64;
    int x;
    int cnt = 0;
    std::cin>>x;
    while(x>0){
        if(x%2){
            cnt++;
        }
        x=x/2;
    }
    std::cout<<cnt<<'\n';
}