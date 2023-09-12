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
...
    1. n자리수 입력 받음
    2. n자리수 숫자는 2,3,5,7 이어야 소수
    3. n-1 자리수 부터는 1,3,5,7,9 이어야 소수일 가능성O (2,4,6,8,0은 2로 나누어 떨어짐)
    4. n번만큼 자리수 반복
*/

#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
bool isPrime(int n);

int main(){
    /* 구현 해야 되는것
    1. 소수 판단하는 isPrime 함수
    2. stack 생성 후 입력받은 숫자의 n자리수 숫자부터 stack으로 받으면서 isPrime
    3. n번 반복 후 isPrime이 모두 true -> 해당 수 출력
    함수화? {   // odd_num_not5에 대한 이중 for문?
        한자리수 추가 될 때, 그 수가 소수 -> 다음 자리수에 odd_num_not5의 0번 index부터 다시
        한자리수 추가 될 때, 그 수가 소수가 아님 -> 해당 자리수 pop -> 해당 자리수의 다음 index의 odd_num_not5 넣기
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            stack.push(i)
            {   // 소수 판별 과정에서 아래 조건문이 계속 반복됨, j<4 까지
            if(isPrime)
                continue;
            else
                stack.pop();
                stack.push(j);
            }
        }
    }
    */
    int n;
    std::cin>>n;
    std::stack<int> number;
    std::vector<int> prime_number = {2,3,5,7};
    std::vector<int> odd_num_not5 = {1,3,7,9};
    // n자리수에 2,3,5,7 넣는 반복문
    
    }
    return 0;
}
// 소수 구하는 함수
bool isPrime(int n){
    int x = (int)sqrt(n);
    for(int i=2; i<=x; i++)
        if(n%i==0)  return false;
    return true;
}