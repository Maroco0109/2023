/* ���� 13023
ģ������: A-B-C-D-E
input
ù��° �ٿ� ����� ��(==node) n(5<=n<=2000), ģ�� ������ ��(==edge) m(1<=m<=2000)
�ι�° �ٺ��� m���� �ٿ� ���� a,b (a�� b�� ģ����� ��), ���� ģ�� ���谡 2�� �̻� �־����� ����

1. �׷��� �����͸� ���� ����Ʈ�� ����(�����)
2. ��� ��忡�� DFS ����(��� ȣ�⸶�� ���̸� ����)
3. ���̰� 5�� �Ǹ� 1�� ����ϰ� ����
4. ��� ��带 Ž���ص� 1�� ���x -> 0�� ���
*/

#include<iostream>
#include<vector>

static std::vector<std::vector<int>> A;
static std::vector<bool> visited;
static bool arrive;
void DFS(int now, int depth);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m;
    arrive = false;
    std::cin>>n>>m;
    A.resize(n);
    visited = std::vector<bool>(n,false);

    for(int i=0; i<m; i++){
        int a, b;
        std::cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(int i=0; i<n; i++){
        DFS(i, 1);
        if(arrive) break;
    }
    if(arrive)  std::cout<<1<<'\n';
    else        std::cout<<0<<'\n';
}
void DFS(int now, int depth){
    if(depth==5||arrive){
        arrive=true;
        return;
    }
    visited[now]=true;
    for(int i: A[now]){
        if(!visited[i]){
            DFS(i,depth+1);
        }
    }
    visited[now] = false;
}