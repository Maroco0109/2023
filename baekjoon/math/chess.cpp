/* 백준 3003
16개 피스: 킹1 퀸1 룩2 비숍2 나이트2 폰8
input: 흰색 킹, 퀸, 룩, 비숍, 나이트, 폰 개수
output: 킹, 퀸, 룩, 비숍, 나이트, 폰 순서로 개수 차이 출력

psuedo

chess_black[6] = {1,1,2,2,2,8};
chess_white[6];
result[i];
for(int i=0; i<6; i++){
    result[i] = chess_black[i]-chess_white[i];
}
*/

#include<iostream>
#include<vector>

int main(){
    std::vector<int> chess_black = {1,1,2,2,2,8};
    std::vector<int> chess_white(6,0);
    std::vector<int> result(6,0);

    for(int i=0; i<6; i++)
        std::cin>>chess_white[i];
    for(int i=0; i<6; i++)
        result[i]=chess_black[i]-chess_white[i];
    for(int i=0; i<6; i++)
        std::cout<<result[i]<<" ";
    std::cout<<'\n';

    return 0;
}