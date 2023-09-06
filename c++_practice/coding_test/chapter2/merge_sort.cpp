/*
병합정렬
divide and conquer
1) 배열을 set으로 구분
2) set 크기가 최소(==1)가 될 때 까지 divide
3) set을 한번씩 병합하면서 정렬(conquer)
4) array size == first array size가 될 때 까지 정렬

시간복잡도: 1번의 merge(N) * divide 횟수(log2(N)) == Nlog2(N)

병합정렬 수행 방식
**2개의 그룹을 병합하는 과정 -> 투 포인터
1) 왼쪽, 오른쪽 그룹 병합
2) 왼쪽 포인터, 오른쪽 포인터  값을 비교하여 작은 값을 결과 배열에 추가 -> 작은 값의 포인터 오른쪽으로 1칸 이동
3) 한 쪽 포인터가 끝까지 갈 때 까지 반복
4) 한 쪽 포인터가 끝까지 도달 -> 반대 쪽 포인터 뒷 부분의 배열 그대로 병합(why?: 이미 정렬된 두 배열, 한 쪽 포인터의 최대값 < 반대 쪽 포인터의 포인터 값 이라서)
*/
//merge sort
// merge_sort: 배열을 나누고 merge 함수 호출
// merge: 배열 합병 진행
#include<iostream>
int a[]={11,12,13,5,7,6};
int n = sizeof(a)/sizeof(a[0]);
int *result;

void merge_sort(int start, int end);
void merge(int start, int mid, int end);
int main(){
    result = new int[n];
    for(int i=0; i<n; i++)
        std::cout<<a[i]<<" ";
    std::cout<<'\n';

    merge_sort(0,n-1);

    for(int i=0; i<n; i++)
        std::cout<<a[i]<<" ";
    std::cout<<'\n';

    return 0;
}
void merge_sort(int start, int end){
    int mid;
    if(start < end){
        mid = (start+end)/2;
        merge_sort(start,mid);
        merge_sort(mid+1,end);
        merge(start, mid, end);
    }
}
void merge(int start, int mid, int end){
    int i=start, j=mid+1, k=start;

    while(i<=mid&&j<=end){
        if(a[i]<=a[j])
            result[k++]=a[i++];
        else
            result[k++]=a[j++];
    }
    int tmp = i > mid ? j : i;
    while(k<=end)
        result[k++]=a[tmp++];
    for(int i=start; i<=end; i++)
        a[i]=result[i];
}