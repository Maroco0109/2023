// ��ǻ�͸� �����ϴ� ȸ���� KOI ���ڿ����� �����ϴ� ��ǻ�͸��� 6�ڸ��� ������ȣ�� �ű��. 
// ������ȣ�� ó�� 5�ڸ����� 00000���� 99999������ �� �� �ϳ��� �־����� 6��° �ڸ����� �������� ����.
// �������� ������ȣ�� ó�� 5�ڸ��� ���� 5���� ���ڸ� ���� ������ ���� ���� 10���� ���� �������̴�.
// ���� ��� ������ȣ�� ó�� 5�ڸ��� ���ڵ��� 04256�̸�, �� ���ڸ� ������ ������ �� 0+16+4+25+36 = 81 �� 10���� ���� �������� 1�� �������̴�.

// input: ù° �ٿ� ������ȣ�� ó�� 5�ڸ��� ���ڵ��� ��ĭ�� ���̿� �ΰ� �ϳ��� �־�����.
// output: ù° �ٿ� �������� ����Ѵ�.
#include<iostream>
#include<vector>
#include<math.h>
int main(){
    int a[5];
    std::cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    int sum=0;
    int ver_num;
    for(int i=0;i<5;i++)
        sum+=pow(a[i],2);
    ver_num=sum%10;
    std::cout<<ver_num<<'\n';

    return 0;
}