/* 백준 2563
가로, 세로가 100인 정사각형 모양의 흰색 도화지
가로, 세로가 10인 정사각형 모양의 검은색 색종이를 색종이의 변화 도화지의 변이 평행하게 붙인다

색종이를 하나 혹은 여러장 붙인 후 색종이가 붙은 영역의 넓이

input: 색종이 수, 색종이 위치: 1. 색종이 왼쪽 <-> 도화지 왼쪽, 2. 색종이 아래쪽 <-> 도화지 아래쪽
output: 검은 영역의 넓이
*/

#include<iostream>
#include<vector>
std::vector<std::vector<bool>>v(100, std::vector<bool>(100,0));

int main(){
    int n;
    int x, y;
    int cnt=0;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>x>>y;
        for(int a=x; a<x+10; a++){
            for(int b=y; b<y+10; b++){
                if(v[a][b]!=1){
                    v[a][b]=1;
                    cnt++;
                }
            }
        }
    }
    std::cout<<cnt<<'\n';
}