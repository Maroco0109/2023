#include <iostream>
#include <queue>
#include <vector>


int main(){
    int n, m, v;
    std::cin>>n m v;
    std::queue<int> q;
    std::vector<vector<int>> node;
    for(int i = 0; i < m; i++){
        std::cin>>int r int t;
        node.emplace_back(r);
        node.emplace_back(t);
    }
    std::cout<<node<<'\n';
}