#include<iostream>

int main(){
    int n, v, cnt=0;
    std::cin>>n;
    int vect[n];
    for(int i=0;i<n;i++)
        std::cin>>vect[i];
    std::cin>>v;
    for(int j=0;j<n;j++){
        if(vect[j]==v)
            cnt++;
    }
    std::cout<<cnt<<'\n';

}