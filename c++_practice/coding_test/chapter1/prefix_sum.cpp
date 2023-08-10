/*
구간 합: 합 배열을 이용하여 시간 복잡도를 더 줄이기 위해 사용하는 특수한 목적의 알고리즘
핵심이론: 합 배열을 구해야 한다.
합 배열: S[i] = A[0]+A[1]+A[2]+...+A[i-1]+A[i]  //A[0] 부터 A[i]까지의 합

공식: S[i]=S[i-1]+A[i]; // S[0]==A[0] 이므로 S[0]은 A[3]으로 초기화
A[5]={15,13,10,7,3,12};
S[5]={15,(15+13),(15+13+10),(15+13+10+7),(15+13+10+7+3),(15+13+10+7+3+12)};

합 배열을 통한 구간 합 구하는 공식(i ~ j 까지 구간 합)
S[j]-S[i-1];    // S[j]까지의 구간합(0,1,...,j) - S[i-1](0,1,...,i-1)까지의 구간합 = S[i] ~ S[j](i,i+1,...,j) 까지의 구간합

배열의 값이 자주 변할 때 -> segment tree(index tree)
*/

// 백준 1253. 좋다
// 문제: N개의 수 중에서 어떤 수가 다른 수 두개의 합으로 나타낼 수 있으면 그 수를 "좋다(GOOD)"고 한다.
// input: 수의 개수 N, i번째 수를 나타내는 A[i]가 N개
// output: 좋은 수의 개수

// 해결 방법: 투 포인터 사용
// 투 포인터:
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
int main(){
    
    int n, tmp, cnt=0;
    do{
        std::cin>>n;
    }while(n<1||n>2000);
    std::vector<int> A(n);
   
    for(int i=0;i<n;i++)
        scanf(" %d",&A[i]);

    sort(A.begin(),A.end());
    
    for(int i=0; i<n; i++){
        tmp=A[i];
        int j=0, k=n-1, sum;
        while(j<k){
            sum=A[j]+A[k];
            if(sum==tmp){
                if(i!=j&&i!=k){
                    cnt++;
                    break;
                }
                else if(j==i)
                    j++;
                else if(k==i)
                    k--;
            }
            else if(sum>tmp)
                k--;
            else if(sum<tmp)
                j++;
        }
    }
    std::cout<<cnt<<'\n';
    return 0;
}