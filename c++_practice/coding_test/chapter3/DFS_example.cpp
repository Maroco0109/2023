#include<iostream>

static int n;
void DFS(int number, int jarisu);
bool isPrime(int number);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin>>n;
    // DFS 함수(소수, 해당 자리수)
    DFS(2, 1);  
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}
void DFS(int number, int jarisu){
    // n 자리수 까지 탐색 완료
    if(jarisu == n){
        // 소수라면 출력
        if(isPrime(number)) {std::cout<<number<<'\n';}
        return;
    }
    for(int i=1; i<10; i++){
        if(i%2==0)  continue;
        if(isPrime(number*10+i))
            DFS(number*10+i, jarisu+1);
    }
}
bool isPrime(int number){   // 소수 판별 알고리즘 - n/2 까지 or n의 제곱근 까지
    for(int i=2; i<=number/2;i++){
        if(number%i == 0)   return false;
    }
    return true;
}