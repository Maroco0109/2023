/* 백준 10813
int n, m
m번 반복
i번, j번 값 교환
*/
#include<iostream>
#include<vector>
#include<utility>

int main(){
    int n, m, i, j;
    std::cin>>n>>m;
    std::vector<int> basket(n+1,0);
    for(int t=1;t<=n;t++)
        basket[t]=t;
    for(int t=0;t<m;t++){
        std::cin>>i>>j;
        std::swap(basket[i],basket[j]);
    }
    for(int t=1;t<=n;t++)
        std::cout<<basket[t]<<" ";

    return 0;
}