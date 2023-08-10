/*
���� ��: �� �迭�� �̿��Ͽ� �ð� ���⵵�� �� ���̱� ���� ����ϴ� Ư���� ������ �˰���
�ٽ��̷�: �� �迭�� ���ؾ� �Ѵ�.
�� �迭: S[i] = A[0]+A[1]+A[2]+...+A[i-1]+A[i]  //A[0] ���� A[i]������ ��

����: S[i]=S[i-1]+A[i]; // S[0]==A[0] �̹Ƿ� S[0]�� A[3]���� �ʱ�ȭ
A[5]={15,13,10,7,3,12};
S[5]={15,(15+13),(15+13+10),(15+13+10+7),(15+13+10+7+3),(15+13+10+7+3+12)};

�� �迭�� ���� ���� �� ���ϴ� ����(i ~ j ���� ���� ��)
S[j]-S[i-1];    // S[j]������ ������(0,1,...,j) - S[i-1](0,1,...,i-1)������ ������ = S[i] ~ S[j](i,i+1,...,j) ������ ������

�迭�� ���� ���� ���� �� -> segment tree(index tree)
*/

// ���� 1253. ����
// ����: N���� �� �߿��� � ���� �ٸ� �� �ΰ��� ������ ��Ÿ�� �� ������ �� ���� "����(GOOD)"�� �Ѵ�.
// input: ���� ���� N, i��° ���� ��Ÿ���� A[i]�� N��
// output: ���� ���� ����

// �ذ� ���: �� ������ ���
// �� ������:
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