/*
�� ����: ���ذ�(pivot)�� �����Ͽ� �ش� ������ ���� ������, ū �����ͷ� �з�
��� �ð� ���⵵: O(nlogn) // merge sort
�־��� �ð� ���⵵: O(n^2)  // bubble, selection, insert
����
1) ������ �����ϴ� pivot ����
2) pivot �������� 2���� �������� �и�
2-1)start, pivot �� -> pivot���� start�� ŭ -> start ���������� 1ĭ
2-2)end, pivot �� -> pivot���� end�� ���� ->  end �������� 1ĭ
2-3)end < pivot < start -> start, end swap, start�� ������, end�� �������� 1ĭ �̵�
2-4)start, end�� ���� �� ���� �ݺ�
2-5)start, end�� ���� �������� ����Ű�� ������, pivot�� �����͸� ���Ͽ� pivot�� ������
    pivot�� ���ʿ�, pivot�� ũ�� �����ʿ� ����
3) �и� ���տ��� pivot ����
*/
// ���� 11104
// ���� N�� A1...An�� �־�����. �������� ���� �� K��° �ִ� ���� ���Ͽ���
// input: ù°�ٿ� n�� k, ��°�ٿ� A1...An
// output: A�� ���� ���� �� K��° ��
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