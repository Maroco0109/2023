/*
��������
divide and conquer
1) �迭�� set���� ����
2) set ũ�Ⱑ �ּ�(==1)�� �� �� ���� divide
3) set�� �ѹ��� �����ϸ鼭 ����(conquer)
4) array size == first array size�� �� �� ���� ����

�ð����⵵: 1���� merge(N) * divide Ƚ��(log2(N)) == Nlog2(N)

�������� ���� ���
**2���� �׷��� �����ϴ� ���� -> �� ������
1) ����, ������ �׷� ����
2) ���� ������, ������ ������  ���� ���Ͽ� ���� ���� ��� �迭�� �߰� -> ���� ���� ������ ���������� 1ĭ �̵�
3) �� �� �����Ͱ� ������ �� �� ���� �ݺ�
4) �� �� �����Ͱ� ������ ���� -> �ݴ� �� ������ �� �κ��� �迭 �״�� ����(why?: �̹� ���ĵ� �� �迭, �� �� �������� �ִ밪 < �ݴ� �� �������� ������ �� �̶�)
*/
//merge sort
// merge_sort: �迭�� ������ merge �Լ� ȣ��
// merge: �迭 �պ� ����
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