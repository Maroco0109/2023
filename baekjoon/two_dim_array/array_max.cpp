/* ���� 2566
9x9 2���� �迭�� 81���� 0~n������ �ڿ����� �־��� ��
�ִ밪�� ã�� �ִ밪�� index(x,y) ��ȯ
input: 1��°�� ~ 9��°��, ���ٿ� 9���� �� �Է�
output: 1��°�� �ִ밪, ��°�� ���ȣ, ����ȣ. 2�� �̻��� ��� �� ���� ��ġ
*/

#include<iostream>
#include<vector>
std::vector<std::vector<int>> v(9, std::vector<int>(9,0));
int max_el = 0, index_x = 0, index_y = 0;

int main(){
    for(int i=0; i<9; i++){
        std::cin>>v[i][0]>>v[i][1]>>v[i][2]>>v[i][3]>>v[i][4]>>v[i][5]>>v[i][6]>>v[i][7]>>v[i][8];
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(v[i][j]>max_el){
                max_el = v[i][j];
                index_x = i;
                index_y = j;
            }
        }
    }
    std::cout<<max_el<<'\n';
    std::cout<<index_x+1<<" "<<index_y+1<<'\n';
}