// �ܾ� S�� ���� i�� �־����� ��, S�� i��° ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// input: ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ� S�� �־�����. �ܾ��� ���̴� �ִ� 1000�̴�.
//        ��° �ٿ� ���� i�� �־�����(1<=i<=|S|)
#include<iostream>
#include<string>
int main(){
    std::string s;
    int i;
    while(1){
        std::cin>>s;
        std::cin>>i;
        if(s.length()<=1000&&i>=1&&i<=s.length())
            break;
    }
    std::cout<<s.at(i-1)<<'\n';
}