/* ���� 3003
16�� �ǽ�: ŷ1 ��1 ��2 ���2 ����Ʈ2 ��8
input: ��� ŷ, ��, ��, ���, ����Ʈ, �� ����
output: ŷ, ��, ��, ���, ����Ʈ, �� ������ ���� ���� ���

psuedo

chess_black[6] = {1,1,2,2,2,8};
chess_white[6];
result[i];
for(int i=0; i<6; i++){
    result[i] = chess_black[i]-chess_white[i];
}
*/

#include<iostream>
#include<vector>

int main(){
    std::vector<int> chess_black = {1,1,2,2,2,8};
    std::vector<int> chess_white(6,0);
    std::vector<int> result(6,0);

    for(int i=0; i<6; i++)
        std::cin>>chess_white[i];
    for(int i=0; i<6; i++)
        result[i]=chess_black[i]-chess_white[i];
    for(int i=0; i<6; i++)
        std::cout<<result[i]<<" ";
    std::cout<<'\n';

    return 0;
}