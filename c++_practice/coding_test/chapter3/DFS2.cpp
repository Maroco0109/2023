/* 백준 13023
사람 n명(index: 0 ~ n-1)
A->B->C->D->E 의 관계가 성립하는 사람들이 존재?
input:  n(사람의 수), m(친구 관계의 수)
        m개 줄에 정수 a, b -> a, b 는 친구 // 친구 관계는 두 번 이상 주어지지 않음
output: A,B,C,D,E가 존재하면 1, 아니면 0

* node 와 edge 가 존재함
* edge에 가중치 x, 방향성 == 양방향
* 그래프 탐색하여 5번쨰 노드까지 도달하는 경우기 있나 탐색
*/
#include<iostream>
#include<vector>

std::vector<int> nodes[2000];
std::vector<bool> visit(2000);
bool arrive;
void DFS(int node, int depth);

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n,m,a,b;
    std::cin>>n>>m;
    nodes->resize(n);
    visit = std::vector<bool>(n,false);
    arrive = false;
    for(int i=0; i<m; i++){
        std::cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    for(int i=0; i<n; i++)
        DFS(i,1);
    if(arrive)
        std::cout<<1<<'\n';
    else
        std::cout<<0<<'\n';
    return 0;
}

// 그래프 탐색
void DFS(int node, int depth){
    if(depth==5||arrive){
        arrive=true;
        return;
    }
    visit[node] = true;
    for(int i=0; i<nodes[node].size(); i++){
        int next_node=nodes[node][i];
        if(!visit[next_node]){
            DFS(next_node, depth+1);
        }
    }
    visit[node] = false;
}