/*
시간 복잡도 표기법
시간 복잡도: 문제를 해결하기 위한 연산 횟수 - 1억번의 연산을 1초의 수행시간으로 예측

빅-오메가: best case
빅-세타: average case
빅-오: worst case

빅-오 표기법을 기준으로 수행속도 판단하는 것이 중요: 최악의 경우를 항상 고려해야되기 때문

O(n^2), O(nlogn) 사이에서 고민하는 경우가 많다.
=> 시간 복잡도를 알고리즘 선택의 기준으로 사용

연산 횟수 계산 방법
연산 횟수 = (알고리즘 시간 복잡도 n) x (데이터의 최대 크기)
ex) 버블정렬: (1,000,000)^2 > 200,000,000, 병합정렬: (1,000,000)log(1,000,000) < 200,000,000

시간 복잡도를 바탕으로 코드 로직 개선: 시간 복잡도 도출 기준
1) 상수는 시간 복잡도 계산에서 제외 ex) O(n) == O(3n)
2) 가장 많이 중첩된 반복문(for, while)의 수행 횟수가 시간 복잡도의 기준
=> 시간 초과가 발생 했을 때, 문제가 되는 부분 도출 후 효율적인 구조로 수정가능

시간 복잡도의 필요성
- 알고리즘 선택 기준
- 시간 초과 시의 코드 자가진단
*/

// 0~99의 숫자를 랜덤으로 할당받고 0 부터 순차적으로 값을 비교하는 코드
#ifdef  randNum
#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    int findNumber;
    srand(time(NULL));
    findNumber=rand()%100;  // 0~99 사이의 값 무작위 선택

    for(int i=0;i<100;i++)
        if(i==findNumber){
            std::cout<<i<<'\n';
            break;
        }
    return 0;
}
#endif
// 연산횟수 = N
#ifdef  cnt_n
#include<iostream>
int main(){
    int n=1000;
    int cnt=0;
    for(int i=0; i<n;i++)
        cnt++;
    std::cout<<cnt<<'\n';
}
#endif
// 연산횟수 = 3N == N
#ifdef cnt_3n
#include<iostream>
int main(){
    int n=1000;
    int cnt=0;
    for(int i=0; i<n;i++)
        cnt++;
    for(int i=0; i<n;i++)
        cnt++;
    for(int i=0; i<n;i++)
        cnt++;
    std::cout<<cnt<<'\n';
}
#endif
// 연산횟수 = N^2
#ifdef cnt_n2
#include<iostream>
int main(){
    int n=1000;
    int cnt=0;
    // for문이 중첩되어있기 때문에 n번이 n번 수행됨 -> n^2
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cnt++;
    std::cout<<cnt<<'\n';
}
#endif  