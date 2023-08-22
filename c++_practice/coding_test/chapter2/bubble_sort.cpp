/*
���� �˰���
����: �������� ���� ��ҳ��� ���ϰ�, swap ������ �����ϸ� �����ϴ� ���
����: ��󿡼� ���� ũ�ų� ���� �����͸� ã�ư� ������ �ݺ��ϸ鼭 �����ϴ� ���
����: ����� ������ ���ĵ� �������� ���� �������� ������ ��ġ�� ã�� �����ϸ鼭 �����ϴ� ���
��: pivot ���� ������ �ش� ���� �������� �����ϴ� ���
����(merge): �̹� ���ĵ� �κ� ���յ��� ȿ�������� ������ ��ü�� �����ϴ� ���
���(radix): �������� �ڸ����� �������� ���� �����͸� �����ϴ� ���

[���� ����]
�ð����⵵: O(n^2)
����
1) �� ������ �ʿ��� ���� ���� ����
2) ������ ������ �� ��
3) swap ������ �����ϸ� swap ���� ����
4) ���� ���� ������ swap �ݺ�
5) ���� ���� �缳��. 1)���� ������ ���� ����
* Ư�� ������ ��ü �������� swap�� �ѹ��� �߻�x => ���� ���� �����Ͱ� ��� ���ĵ� => ���μ��� ����
*/
#include<iostream>
#include<algorithm>
#include<vector>
#ifdef bubble_sort1
int main(){
    int N;
    std::cin>>N;
    int A[N+1];
    for(int i=1;i<N+1;i++)
        std::cin>>A[i];
    bool changed = false;
    for (int i=1; i<=N+1; i++) {
        changed = false;
        for (int j=1; j<=N-i; j++) {
            if (A[j] > A[j+1]) {
                changed = true;
                std::swap(A[j], A[j+1]);
            }
        }
        if (changed == false) {
            std::cout << i << '\n';
            break;
        }
    }
}
#endif
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int N;
    std::cin>>N;
    std::vector<std::pair<int,int>> A(N);    // pair vector �������� first�� ���� �� index, second�� ���� �� index ����
    for(int i=0;i<N;i++){
        std::cin>>A[i].first;
        A[i].second=i;
    }
    std::sort(A.begin(),A.end());
    int MAX=0;
    for(int i=0;i<N;i++){
        if(MAX<A[i].second-i)   // ���� �� index - ���� �� index
            MAX=A[i].second-i;
    }
    std::cout<<MAX+1;   // �������� swap�� �ȵǴ� �ݺ����� �����Ƿ� +1
}
/*
���� for���� �� �� ����Ǵ��� ���ϴ� �ٸ� ���̵��
1~(n-j) ����,  �� ���ʿ��� ���������� �̵��ϸ� swap ����
=> Ư�� �����Ͱ� swap�� �������� �̵��� �� �ִ� �ִ� �Ÿ��� 1.
�������� ���� �� index�� ���� �� index�� ���� �������� ���� ���� �̵��� ���� ã���� loop Ƚ�� �ľ� ����
*/