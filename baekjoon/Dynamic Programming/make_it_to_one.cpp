#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin>>n;
    std::vector<int> v(n+1);
    
    v[1] = 0;
    for(int i = 2; i <= n; i++){
        v[i] = v[i-1] + 1;
        if(!(i % 3))
            v[i] = std::min(v[i], v[i/3]+1);
        if(!(i % 2))
            v[i] = std::min(v[i], v[i/2]+1);
    }

    std::cout<<v[n]<<'\n';
}