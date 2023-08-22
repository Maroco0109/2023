/*
퀵 정렬: 기준값(pivot)을 선정하여 해당 값보다 작은 데이터, 큰 데이터로 분류
평균 시간 복잡도: O(nlogn) // merge sort
최악의 시간 복잡도: O(n^2)  // bubble, selection, insert
과정
1) 데이터 분할하는 pivot 설정
2) pivot 기준으로 2개의 집합으로 분리
2-1)start, pivot 비교 -> pivot보다 start가 큼 -> start 오른쪽으로 1칸
2-2)end, pivot 비교 -> pivot보다 end가 작음 ->  end 왼쪽으로 1칸
2-3)end < pivot < start -> start, end swap, start는 오른쪽, end는 왼쪽으로 1칸 이동
2-4)start, end가 만날 때 까지 반복
2-5)start, end가 만난 지점에서 가리키는 데이터, pivot의 데이터를 비교하여 pivot이 작으면
    pivot을 왼쪽에, pivot이 크면 오른쪽에 삽입
3) 분리 집합에서 pivot 설정
*/
// 백준 11104
// 숫자 N개 A1...An이 주어진다. 오름차순 정렬 시 K번째 있는 수를 구하여라
// input: 첫째줄에 n과 k, 둘째줄에 A1...An
// output: A를 정렬 했을 때 K번째 수
#include<iostream>
#include<vector>
#include<algorithm>
void quick_sort(std::vector<int> &A, int s, int e, int k);
int partition(std::vector<int> &A, int s, int e);
void swap(std::vector<int> &A, int s, int e);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);

    int n, k;
    std::cin>>n>>k;
    std::vector<int> A(n, 0);
    
    for(int i=0;i<n;i++)
        std::cin>>A[i];

    quick_sort(A,0,n-1,k-1);
    std::cout<<A[k-1];

    return 0;
}
void quick_sort(std::vector<int> &A, int s, int e, int k){
    int pivot=partition(A,s,e);
    if(pivot==k)
        return;
    else if(k<pivot)
        quick_sort(A,s,pivot-1,k);
    else
        quick_sort(A,pivot+1,e,k);
}
int partition(std::vector<int> &A,int s,int e){
    if(s+1==e){
        if(A[s]>A[e])
            swap(A,s,e);
        return e;
    }
    int m = (s+e)/2;
    swap(A,s,m);
    int pivot = A[s];
    int i = s+1;
    int j = e;

    while(i<=j){
        while(pivot<A[j]&&j>0)
            j--;
        while(pivot>A[i]&&i<A.size()-1)
            i++;
        if(i<=j)
            swap(A,i++,j--);
    }
    A[s]=A[j];
    A[j]=pivot;
    return j;
}
void swap(std::vector<int> &A, int s, int e){
    int temp = A[s];
    A[s]=A[e];
    A[e]=temp;
}