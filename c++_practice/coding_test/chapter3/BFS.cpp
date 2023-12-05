/*  BFS: �ʺ� �켱 Ž��
[����]
���� ��忡�� ����� ���� ��带 �������� ����� ��带 ���� �湮�ϸ鼭 Ž��
- root node���� ���̰� 1�� ��� Ž�� -> ���̰� 1�� ��忡�� ���̰� 2�� ��� Ž�� -> ...
��ǥ ��忡 �����ϴ� ��ΰ� �������� �� �ִ� ��θ� ����
- ���̰� ���� node���� Ž�� -> �ִ� ��� ����: Ư�� node Ž�� ��, �� ��� ������ �ִܰŸ� = BFS tree �� �ش� node�� ��ġ�� ����(����ġ ��� x)

[Ư¡]
- FIFO Ž��
- Queue �ڷᱸ�� �̿�
1. BFS ���� ��� ���� �� ����� �ڷᱸ�� �ʱ�ȭ
�湮 �迭, �׷����� ���� ����Ʈ�� ǥ��
ť�� ������ push
2. ť���� ��带 ���� �� ���� ����� ���� ��带 �ٽ� ť�� ����
pop�� ���� Ž�� ������ ����
ť�� ����� ���� ���� �湮�迭 �� ����
3. ť �ڷᱸ���� ���� ���� �� ���� �ݺ�

[����]
- connected components
- shortest paths
- cycle(in connected graphs)
    - tree ������ cycle�� ������ ���� -> n ���� node => n-1 ���� edge
    - edge�� ������ node �������� ���ų� ���� => cycle ���� ����
*/
/* ���� 1167 Ʈ���� ����
input: Ʈ�� ������ ���� v -> 1������ v������ ���� ��� ��ȣ, �Ÿ� �Է� (�߰��Է� -1)
       (���� ��� ��ȣ, �Ÿ�)�� ������ �Է� ����
output: ���� ~ ������ ����� �Ÿ��� ���� �� �� ��� 
*/

// nodes�� ���� ��� �� �Ÿ��� ���ԵǾ�� ��
// ����ü Ȥ�� Ŭ������ ���� �� ���� 2�� ���� ���� ����Ʈ�� ����
#include<iostream>
#include<vector>
#include<queue>

// first�� ���, second�� weight
std::vector<std::pair<int, int>> nodes[10001];
std::vector<bool> visit(10001);
// ��� ���� ���� queue ���� �ʿ�
int max_distance;
void BFS(int node, int distance);
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int v;
    std::cin>>v;
    // �Է¹��� �� ����
    int start, to, weight;
    for(int i=0; i<v; i++){
        std::cin>>start;
        while (true){
            std::cin>>to;
            // to == -1 �̸� �Է� ����
            if(to==-1)
                break;
            std::cin>>weight;
            // pair vector�� to, weight ����
            nodes[start].push_back({to, weight});
        }
    }
    
    return 0;
}
void BFS(int node, int distance){
    if(visit[node])
        return;
    visit[node]=true;

}