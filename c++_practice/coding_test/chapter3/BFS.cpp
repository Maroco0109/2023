/*  BFS: 너비 우선 탐색
[개념]
시작 노드에서 출발해 시작 노드를 기준으로 가까운 노드를 먼저 방문하면서 탐색
- root node에서 깊이가 1인 노드 탐색 -> 깊이가 1인 노드에서 깊이가 2인 노드 탐색 -> ...
목표 노드에 도착하는 경로가 여러개일 때 최단 경로를 보장
- 깊이가 같은 node부터 탐색 -> 최단 경로 보장: 특정 node 탐색 시, 그 노드 까지의 최단거리 = BFS tree 의 해당 node가 위치한 깊이(가중치 고려 x)

[특징]
- FIFO 탐색
- Queue 자료구조 이용
1. BFS 시작 노드 정한 후 사용할 자료구조 초기화
방문 배열, 그래프를 인접 리스트로 표현
큐에 시작점 push
2. 큐에서 노드를 꺼낸 후 꺼낸 노드의 인접 노드를 다시 큐에 삽입
pop된 노드는 탐색 순서에 저장
큐에 저장된 인접 노드는 방문배열 값 변경
3. 큐 자료구조에 값이 없을 때 까지 반복

[응용]
- connected components
- shortest paths
- cycle(in connected graphs)
    - tree 에서는 cycle이 생기지 않음 -> n 개의 node => n-1 개의 edge
    - edge의 개수가 node 개수보다 많거나 같다 => cycle 생성 가능
*/
/* 백준 1167 트리의 지름
input: 트리 정점의 개수 v -> 1번부터 v번까지 다음 노드 번호, 거리 입력 (추가입력 -1)
       (다음 노드 번호, 거리)는 여러개 입력 가능
output: 시작 ~ 마지막 노드의 거리가 가장 긴 값 출력 
*/

// nodes에 인접 노드 및 거리가 포함되어야 함
// 구조체 혹은 클래스로 선언 후 변수 2개 갖는 인접 리스트로 선언
#include<iostream>
#include<vector>
#include<queue>

// first에 노드, second에 weight
std::vector<std::pair<int, int>> nodes[10001];
std::vector<bool> visit(10001);
// 노드 값을 받을 queue 선언 필요
int max_distance;
void BFS(int node, int distance);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int v;
    std::cin>>v;
    // 입력받을 값 선언
    int start, to, weight;
    for(int i=0; i<v; i++){
        std::cin>>start;
        while (true){
            std::cin>>to;
            // to == -1 이면 입력 종료
            if(to==-1)
                break;
            std::cin>>weight;
            // pair vector에 to, weight 저장
            nodes[start].push_back({to, weight});
        }
    }
    
    return 0;
}
void BFS(int node, int distance){
    if(visit[node])
        return;
    visit[node]=true;

}