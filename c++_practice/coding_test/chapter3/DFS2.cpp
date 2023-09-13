/* ���� 13023
��� n��(index: 0 ~ n-1)
A->B->C->D->E �� ���谡 �����ϴ� ������� ����?
input:  n(����� ��), m(ģ�� ������ ��)
        m�� �ٿ� ���� a, b -> a, b �� ģ�� // ģ�� ����� �� �� �̻� �־����� ����
output: A,B,C,D,E�� �����ϸ� 1, �ƴϸ� 0

* node �� edge �� ������
* edge�� ����ġ x, ���⼺ == �����
* �׷��� Ž���Ͽ� 5���� ������ �����ϴ� ���� �ֳ� Ž��
*/
#include<iostream>
#include<vector>

std::vector<int> friends[2000];
bool visited[2000];

void check_five_friends(int x, int cnt);

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n, m, a, b;
    std::cin>>n>>m;
    int cnt = 0;
    for(int i=0; i<m; i++){
        std::cin>>a>>b;
        friends[a].push_back(b);
    }
    check_five_friends(1, cnt);
    if(cnt == 5)    std::cout<<1<<'\n';
    else            std::cout<<0<<'\n';
}
/* ex) 01, 12, 23, 34 input
    friends[0] = {1}
    friends[1] = {2}
    friends[2] = {3}
    friends[3] = {4}
*/
// friends�� ���� �׷��� Ž��
void check_five_friends(int x, int cnt){
    visited[x] = true;
    cnt++;
    for(int i=0; i<friends[x].size(); i++){
        int y = friends[x][i];
        if(!visited[y])
            check_five_friends(y, cnt);
    }
}