/* 백준 10798
A-Z, a-z, 0-9가 2차원 배열에 입력됨(5줄)
각 줄에 최소 1개 ~ 최대 15개의 글자들이 연속적으로 주어짐.
각 행을 차례로 읽은 값을 공백없이 출력
*/

#include<iostream>
#include<string>
#include<vector>
std::string s;
std::vector<std::vector<char>> v(5, std::vector<char>(15,0));

int main(){
    for(int j=0; j<5; j++){
        std::cin>>s;
        for(int i=0; i<s.length(); i++){
            v[j][i] = s[i];
        }
    }
    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(v[i][j] == 0) continue;
            else    std::cout<<v[i][j];
        }
    }
}