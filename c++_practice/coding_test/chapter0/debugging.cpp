/*
디버깅: 문법 오류나 "논리 오류"를 찾아 바로잡는 과정
논리 오류: 코드가 사용자의 의도와 다르게 동작하는 것
=> 컴퓨터의 프로세스대로 코드 진행 방법 이해도↑
=> 알고리즘의 동작 원리를 이해하는데 도움

디버깅 하는 방법
1) 코드에서 디버깅 하고가 하는 줄에 중단점 설정(중단점은 여러개 설정)
2) IDE의 디버깅 기능을 실행(1줄씩 or 다음 중단점 까지) -> 추적할 변수값 지정 및 변수값 추적
3) 원하는 수식을 입력하여 오류 파악 가능
*/

// 실수하기 쉬운 4가지 오류
#include<iostream>
#include<cstdlib>
#include<climits>

int main(){
    int testcase;
    std::cin>>testcase;

    int answer=0;               // 1. random 값이 엄청 커서 overflow 발생 가능 => 음수가 나올 수 없는데 나왔으면 변수 범위 점검
    int a[100001]={0};

    for(int i=1;i<10001;i++)    // 2. index 범위 설정 오류 (0~100000 이 아닌 0~10000 까지만 설정), 배열의 index는 0부터 시작함
        a[i]=rand()*100;        
    for(int t=1;t<testcase+1;t++){
        int start,end;
        std::cin>>start>>end;
        for(int i=start;i<=end;i++)
            answer+=a[i];
        std::cout<<testcase<<" "<<answer;   // 3. t에 관련된 출력을 해야되는데 testcase에 대한 출력
                                            // 4. answer 초기화 로직이 없음
    }
}