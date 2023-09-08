/* 백준 10811
n, m
n크기의 array, m번 반복
i번째 ~ j번째 역순으로 정렬
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n, m, i, j;
    std::cin>>n>>m;
    std::vector<int> basket(n+1,0);
    for(int t=1; t<=n;t++)
        basket[t]=t;
    for(int t=0; t<m; t++){
        std::cin>>i>>j;
        reverse(basket.begin()+i, basket.begin()+j+1);
    }
    for(int t=1; t<=n;t++)
        std::cout<<basket[t]<<" ";
}