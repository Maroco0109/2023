/* ���� 10810
�����̴� �ٱ��ϸ� �� N�� ������ �ְ�, ������ �ٱ��Ͽ��� 1������ N������ ��ȣ�� �Ű��� �ִ�. 
��, 1������ N������ ��ȣ�� �����ִ� ���� �ſ� ���� ������ �ִ�.
���� ó�� �ٱ��Ͽ��� ���� ������� ������, �ٱ��Ͽ��� ���� 1���� ���� �� �ִ�.
�����̴� ������ M�� ���� �������� �Ѵ�. �����̴� �� �� ���� ���� ��, ���� ���� �ٱ��� ������ ���ϰ�, ���� �ٱ��Ͽ� ��� ���� ��ȣ�� �����ִ� ���� �ִ´�. 
����, �ٱ��Ͽ� ���� �̹� �ִ� ��쿡�� ����ִ� ���� ����, ���� ���� �ִ´�. ���� ���� �ٱ��ϴ� ���ӵǾ� �־�� �Ѵ�.
���� ��� �������� �־����� ��, M�� ���� ���� ���Ŀ� �� �ٱ��Ͽ� � ���� ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

input: ù° �ٿ� N (1 �� N �� 100)�� M (1 �� M �� 100)�� �־�����.

��° �ٺ��� M���� �ٿ� ���ļ� ���� �ִ� ����� �־�����. �� ����� �� ���� i j k�� �̷���� ������, i�� �ٱ��Ϻ��� j�� �ٱ��ϱ����� k�� ��ȣ�� ������ �ִ� ���� �ִ´ٴ� ���̴�.
���� ���, 2 5 6�� 2�� �ٱ��Ϻ��� 5�� �ٱ��ϱ����� 6�� ���� �ִ´ٴ� ���̴�. (1 �� i �� j �� N, 1 �� k �� N)

�����̴� �Է����� �־��� ������� ���� �ִ´�.

output: 1�� �ٱ��Ϻ��� N�� �ٱ��Ͽ� ����ִ� ���� ��ȣ�� �������� ������ ����Ѵ�. ���� ������� ���� �ٱ��ϴ� 0�� ����Ѵ�.
*/
/* pseudo
n = 5 m = 4
�ٱ���: 5��, 4�� �� ����
i = 1 j = 2 k = 3
1������ 2�� �ٱ��� ���� 3�� ��ȣ�� ���� ���� �ִ´�
[3][3][ ][ ][ ]
i = 3 j = 4 k = 4
3������ 4�� �ٱ��� ���� 3�� ��ȣ�� ���� ���� �ִ´�
[3][3][4][4][ ]
1 4 1
[1][1][1][1][ ]
2 2 2
[1][2][1][1][0]
int main(){
    int m; // �õ� Ƚ��
    cin>>n>>m;
    basket[n];
    
    

}
*/
#include<iostream>
#include<vector>
int main(){
    int n, m, i, j, k;
    std::cin>>n>>m;
    std::vector<int> basket(n+1,0);
    for(int t=0;t<m;t++){
        std::cin>>i>>j>>k;
        for(i;i<=j;i++){
            basket[i]=k;
        }
    }
    for(int t=1;t<=n;t++){
        std::cout<<basket[t]<<" ";
    }
    std::cout<<'\n';
}