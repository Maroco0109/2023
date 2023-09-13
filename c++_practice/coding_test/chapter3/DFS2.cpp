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

std::vector<int> friends[2000];
bool visited[2000];

void check_five_friends(int x, int cnt);

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, m, a, b;
    std::cin>>n>>m;
    int cnt = 0;
    for(int i=0; i<m; i++){
        std::cin>>a>>b;
        friends[a].push_back(b);
    }
    check_five_friends(1, cnt);
    if(cnt == 5)    std::cout<<1<<'\n';
    else            std::cout<<0<<'\n';
}
/* ex) 01, 12, 23, 34 input
    friends[0] = {1}
    friends[1] = {2}
    friends[2] = {3}
    friends[3] = {4}
*/
// friends에 대한 그래프 탐색
void check_five_friends(int x, int cnt){
    visited[x] = true;
    cnt++;
    for(int i=0; i<friends[x].size(); i++){
        int y = friends[x][i];
        if(!visited[y])
            check_five_friends(y, cnt);
    }
}