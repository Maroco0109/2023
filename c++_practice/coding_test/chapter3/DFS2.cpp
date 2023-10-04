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

std::vector<int> nodes[2000];
std::vector<bool> visit(2000);
bool arrive;
void DFS(int node, int depth);

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int n,m,a,b;
    std::cin>>n>>m;
    nodes->resize(n);
    visit = std::vector<bool>(n,false);
    arrive = false;
    for(int i=0; i<m; i++){
        std::cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    for(int i=0; i<n; i++)
        DFS(i,1);
    if(arrive)
        std::cout<<1<<'\n';
    else
        std::cout<<0<<'\n';
    return 0;
}

// �׷��� Ž��
void DFS(int node, int depth){
    if(depth==5||arrive){
        arrive=true;
        return;
    }
    visit[node] = true;
    for(int i=0; i<nodes[node].size(); i++){
        int next_node=nodes[node][i];
        if(!visit[next_node]){
            DFS(next_node, depth+1);
        }
    }
    visit[node] = false;
}