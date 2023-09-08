/*
기수정렬: 값 비교x -> 자릿수만 비교
시간복잡도: O(kn), k == 데이터의 자릿수 : 자릿수 만큼 queue 1번씩 돌기 때문에

핵심 이론
10개의 **큐 이용, 큐는 값의 자릿수 대표 -> 0~9 까지를 담기 위해 10개의 큐 사용
1) 일의 자릿수를 기준으로 데이터 저장 -> 큐를 사용하여 값 출력 시, 일의 자리 숫자는 정렬 되어있음
2) 십의 자릿수를 기준으로 데이터 저장 -> 다음 큐를 사용하여 값 출력 시, 십의 자리 숫자는 정렬 되어 있음(일의 자리 숫자는 이미 정렬됨)
3) ...
*/
/*
백준 10989
수 정렬하기 3
Q. N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
input: 첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다
output: 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다

- 자리수 비교하는 함수 필요
- 자릿수가 같을 때 다음 자리수 비교 필요
- 최고 자릿수 k값 필요
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
void radix_sort(std::vector<int> &arr, int n);

int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);

    for (int i=0; i<n; i++)
        std::cin>>arr[i];

    radix_sort(arr, n);

    for (int i=0; i<n; i++)
        std::cout<<arr[i]<<'\n';
}

void radix_sort(std::vector<int> &arr, int n){
    int max_val = *std::max_element(arr.begin(), arr.end());        // 정렬 하고자 하는 배열의 최대값
    int digit = (max_val ==0) ? : ((int)log10(max_val)+1);          // 정렬 하고자 하는 배열의 최대값의 자릿수

    std::queue<int> a[10];

    for(int i=1; i<digit; i*=10){
        for(int j=0; j<n; j++){
            int k=0;
            if(arr[j]>=i)
                k=(arr[j]/i)%10;
            a[k].push(arr[j]);
        }
        int idx = 0;
        for(int j=0; j<10; j++){
            while(!a[j].empty()){
                arr[idx]=a[j].front();
                a[j].pop();
                idx++;
            }
        }
    }
}