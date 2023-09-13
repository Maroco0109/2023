/* 
DFS(Depth-First-Search): 그래프의 완전 탐색 기법 중 하나
시작노드에서 출발 -> 분기 선택 -> 최대 깊이까지 탐색 후 다른 쪽 분기로 이동하여 다시 탐색
기능: 그래프 완전 탐색
특징: 재귀 함수로 구현, 스택 자료구조(FILO)이용
시간복잡도(노드: v, 에지: e): O(v+e)
재귀 함수 사용 -> 스택 오버플로우 유의
=> 그래프 완전 탐색, 단절점 찾기, 단절선 찾기, 사이클 찾기, 위상정렬 등
[핵심 이론]
- 한 번 방문한 노드를 다시 방문X -> 노드 방문 여부를 체크할 배열(인접 리스트)
- FILO(후입선출) 특성 -> 스택 성질을 같는 재귀함수로 많이 구현
1. 시작 노드 정한 후 사용할 자료구조 초기화(인접 리스트)
원본 그래프 -> 인접 리스트로 그래프 표현 -> 방문 배열 -> 스택에 시작점 push
2. 스택에서 노드를 pop한 후, 노드의 인접 노드를 스택에 push
pop, 탐색 순서에 기록 -> 인접 리스트 -> pop된 노드의 인접 노드를 push(방문 노드는 push x) -> 노드를 push하며 방문 배열 체크
3. 스택에 값이 없을 때 까지 반복 -> DFS 종료시까지
이미 방문한 노드는 방문 배열을 바탕으로 재삽입 하지 않음!
* 스택에 노드를 삽입할 때 방문 배열 체크, 스택에서 노드를 뺄 때 탐색 순서에 기록, 인접 노드를 방문 배열과 대조
*/
/* 백준 2023
input: 첫째 줄에 N(1 ≤ N ≤ 8)이 주어진다.
output: N자리 수 중에서 신기한 소수를 오름차순으로 정렬해서 한 줄에 하나씩 출력한다
신기한 소수: 왼쪽부터 1자리, 2자리, 3자리, 4자리 모두 소수인 수
ex) 7331: 7, 73, 733, 7331 모두 소수
n의 최대값이 8(8자리수) -> DFS 사용해도 시간복잡도 영향 x
...
    1. n자리수 입력 받음
    2. n자리수 숫자는 2,3,5,7 이어야 소수
    3. n-1 자리수 부터는 1,3,7,9 이어야 소수일 가능성O (2,4,6,8,0은 2로 나누어 떨어짐, 5는 5로 나누어 떨어짐) => 현재수 *10 + a
    4. n번만큼 자리수 반복 -> 재귀 함수 형태로 탐색
*/

#include<iostream>
#include<cmath>
bool isPrime(int n);
void DFS(int number, int digit);

static int n;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    std::cin>>n;

    DFS(2,1);
    DFS(3,1);
    DFS(5,1);
    DFS(7,1);
    return 0;
}
// DFS 알고리즘
void DFS(int number, int digit){
    if(digit == n){
        if(isPrime(number)) {std::cout<<number<<'\n';}
        else    return;
    }
    for(int i=1; i<10; i++){
        if(i%2==0)
            continue;
        if(isPrime(number*10+i))
            DFS(number*10 + i, digit+1);
    }
}
// 소수 구하는 함수
bool isPrime(int n){
    int x = (int)sqrt(n);
    for(int i=2; i<=x; i++)
        if(n%i==0)  return false;
    return true;
}