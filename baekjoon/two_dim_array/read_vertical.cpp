/* ���� 10798
A-Z, a-z, 0-9�� 2���� �迭�� �Էµ�(5��)
�� �ٿ� �ּ� 1�� ~ �ִ� 15���� ���ڵ��� ���������� �־���.
�� ���� ���ʷ� ���� ���� ������� ���
*/

#include<iostream>
#include<string>
#include<vector>
std::string s;
std::vector<std::vector<char>> v(5, std::vector<char>(15,0));

int main(){
    for(int j=0; j<5; j++){
        std::cin>>s;
        for(int i=0; i<s.length(); i++){
            v[j][i] = s[i];
        }
    }
    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(v[i][j] == 0) continue;
            else    std::cout<<v[i][j];
        }
    }
}