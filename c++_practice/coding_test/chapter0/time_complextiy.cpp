/*
�ð� ���⵵ ǥ���
�ð� ���⵵: ������ �ذ��ϱ� ���� ���� Ƚ�� - 1����� ������ 1���� ����ð����� ����

��-���ް�: best case
��-��Ÿ: average case
��-��: worst case

��-�� ǥ����� �������� ����ӵ� �Ǵ��ϴ� ���� �߿�: �־��� ��츦 �׻� ����ؾߵǱ� ����

O(n^2), O(nlogn) ���̿��� ����ϴ� ��찡 ����.
=> �ð� ���⵵�� �˰��� ������ �������� ���

���� Ƚ�� ��� ���
���� Ƚ�� = (�˰��� �ð� ���⵵ n) x (�������� �ִ� ũ��)
ex) ��������: (1,000,000)^2 > 200,000,000, ��������: (1,000,000)log(1,000,000) < 200,000,000

�ð� ���⵵�� �������� �ڵ� ���� ����: �ð� ���⵵ ���� ����
1) ����� �ð� ���⵵ ��꿡�� ���� ex) O(n) == O(3n)
2) ���� ���� ��ø�� �ݺ���(for, while)�� ���� Ƚ���� �ð� ���⵵�� ����
=> �ð� �ʰ��� �߻� ���� ��, ������ �Ǵ� �κ� ���� �� ȿ������ ������ ��������

�ð� ���⵵�� �ʿ伺
- �˰��� ���� ����
- �ð� �ʰ� ���� �ڵ� �ڰ�����
*/

// 0~99�� ���ڸ� �������� �Ҵ�ް� 0 ���� ���������� ���� ���ϴ� �ڵ�
#ifdef  randNum
#include<iostream>
#include<cstdlib>
#include<ctime>
int main(){
    int findNumber;
    srand(time(NULL));
    findNumber=rand()%100;  // 0~99 ������ �� ������ ����

    for(int i=0;i<100;i++)
        if(i==findNumber){
            std::cout<<i<<'\n';
            break;
        }
    return 0;
}
#endif
// ����Ƚ�� = N
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
// ����Ƚ�� = 3N == N
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
// ����Ƚ�� = N^2
#ifdef cnt_n2
#include<iostream>
int main(){
    int n=1000;
    int cnt=0;
    // for���� ��ø�Ǿ��ֱ� ������ n���� n�� ����� -> n^2
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cnt++;
    std::cout<<cnt<<'\n';
}
#endif  