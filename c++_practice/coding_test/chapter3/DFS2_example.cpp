/* 백준 13023
친구관계: A-B-C-D-E
input
첫번째 줄에 사람의 수(==node) n(5<=n<=2000), 친구 관계의 수(==edge) m(1<=m<=2000)
두번째 줄부터 m개의 줄에 정수 a,b (a와 b는 친구라는 뜻), 같은 친구 관계가 2번 이상 주어지지 않음

1. 그래프 데이터를 인접 리스트로 저장(양방향)
2. 모든 노드에서 DFS 수행(재귀 호출마다 깊이를 더함)
3. 깊이가 5가 되면 1을 출력하고 종료
4. 모든 노드를 탐색해도 1이 출력x -> 0을 출력
*/

#include<iostream>
#include<vector>

static std::vector<std::vector<int>> A;
static std::vector<bool> visited;
static bool arrive;
void DFS(int now, int depth);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    arrive = false;
    std::cin>>n>>m;
    A.resize(n);
    visited = std::vector<bool>(n,false);

    for(int i=0; i<m; i++){
        int a, b;
        std::cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(int i=0; i<n; i++){
        DFS(i, 1);
        if(arrive) break;
    }
    if(arrive)  std::cout<<1<<'\n';
    else        std::cout<<0<<'\n';
}
void DFS(int now, int depth){
    if(depth==5||arrive){
        arrive=true;
        return;
    }
    visited[now]=true;
    for(int i: A[now]){
        if(!visited[i]){
            DFS(i,depth+1);
        }
    }
    visited[now] = false;
}