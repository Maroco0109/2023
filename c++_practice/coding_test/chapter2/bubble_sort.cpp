/*
정렬 알고리즘
버블: 데이터의 인접 요소끼리 비교하고, swap 연산을 수행하며 정렬하는 방식
선택: 대상에서 가장 크거나 작은 데이터를 찾아가 선택을 반복하면서 정렬하는 방식
삽입: 대상을 선택해 정렬된 영역에서 선택 데이터의 적절한 위치를 찾아 삽입하면서 정렬하는 방식
퀵: pivot 값을 선정해 해당 값을 기준으로 정렬하는 방식
병합(merge): 이미 정렬된 부분 집합들을 효울적으로 병합해 전체를 정렬하는 방식
기수(radix): 데이터의 자릿수를 바탕으로 비교해 데이터를 정렬하는 방식

[버블 정렬]
시간복잡도: O(n^2)
과정
1) 비교 연산이 필요한 루프 범위 설정
2) 인접한 데이터 값 비교
3) swap 조건이 부합하면 swap 연산 수행
4) 루프 범위 내에서 swap 반복
5) 정렬 영역 재설정. 1)에서 선택한 영역 제외
* 특정 루프의 전체 영역에서 swap이 한번도 발생x => 영역 뒤의 데이터가 모두 정렬됨 => 프로세스 종료
*/
#include<iostream>
#include<algorithm>
#include<vector>
#ifdef bubble_sort1
int main(){
    int N;
    std::cin>>N;
    int A[N+1];
    for(int i=1;i<N+1;i++)
        std::cin>>A[i];
    bool changed = false;
    for (int i=1; i<=N+1; i++) {
        changed = false;
        for (int j=1; j<=N-i; j++) {
            if (A[j] > A[j+1]) {
                changed = true;
                std::swap(A[j], A[j+1]);
            }
        }
        if (changed == false) {
            std::cout << i << '\n';
            break;
        }
    }
}
#endif
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N;
    std::cin>>N;
    std::vector<std::pair<int,int>> A(N);    // pair vector 선언으로 first에 정렬 전 index, second에 정렬 후 index 저장
    for(int i=0;i<N;i++){
        std::cin>>A[i].first;
        A[i].second=i;
    }
    std::sort(A.begin(),A.end());
    int MAX=0;
    for(int i=0;i<N;i++){
        if(MAX<A[i].second-i)   // 정렬 전 index - 정렬 후 index
            MAX=A[i].second-i;
    }
    std::cout<<MAX+1;   // 마지막에 swap이 안되는 반복문이 있으므로 +1
}
/*
안쪽 for문이 몇 번 수행되는지 구하는 다른 아이디어
1~(n-j) 까지,  즉 왼쪽에서 오른쪽으로 이동하며 swap 수행
=> 특정 데이터가 swap의 왼쪽으로 이동할 수 있는 최대 거리가 1.
데이터의 정렬 전 index와 정렬 후 index를 비교해 왼쪽으로 가장 많이 이동한 값을 찾으면 loop 횟수 파악 가능
*/