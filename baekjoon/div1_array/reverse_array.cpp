/* ���� 10811
n, m
nũ���� array, m�� �ݺ�
i��° ~ j��° �������� ����
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