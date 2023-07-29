#include<iostream>

int main(){
    unsigned int x, n, a, b, sum=0;
    // 영수증의 총 금액 x
    std::cin>>x;
    // 물건의 종류의 수 n
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a>>b;
        sum=sum+(a*b);
    }
    if(x==sum)
        std::cout<<"Yes"<<'\n';
    else
        std::cout<<"No"<<'\n';
}