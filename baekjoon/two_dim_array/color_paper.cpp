/* ���� 2563
����, ���ΰ� 100�� ���簢�� ����� ��� ��ȭ��
����, ���ΰ� 10�� ���簢�� ����� ������ �����̸� �������� ��ȭ ��ȭ���� ���� �����ϰ� ���δ�

�����̸� �ϳ� Ȥ�� ������ ���� �� �����̰� ���� ������ ����

input: ������ ��, ������ ��ġ: 1. ������ ���� <-> ��ȭ�� ����, 2. ������ �Ʒ��� <-> ��ȭ�� �Ʒ���
output: ���� ������ ����
*/

#include<iostream>
#include<vector>
std::vector<std::vector<bool>>v(100, std::vector<bool>(100,0));

int main(){
    int n;
    int x, y;
    int cnt=0;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>x>>y;
        for(int a=x; a<x+10; a++){
            for(int b=y; b<y+10; b++){
                if(v[a][b]!=1){
                    v[a][b]=1;
                    cnt++;
                }
            }
        }
    }
    std::cout<<cnt<<'\n';
}