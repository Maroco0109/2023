#include<iostream>

int main(){
    unsigned int x, n, a, b, sum=0;
    // �������� �� �ݾ� x
    std::cin>>x;
    // ������ ������ �� n
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