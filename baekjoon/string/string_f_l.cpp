/* ���� 9086
���ڿ��� ���� ù����, ������ ���� ���
*/

#include<iostream>
#include<string>

int main(){
    std::string s;
    int t;
    std::cin>>t;
    for(int i=0; i<t;i++){
        std::cin>>s;
        std::cout<<s.front()<<s.back()<<'\n';
    }

}