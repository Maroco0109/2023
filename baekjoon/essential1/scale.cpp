// �������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.
// 1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.
// ������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

// input: ù° �ٿ� 8�� ���ڰ� �־�����. �� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
// output: ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.
#include<iostream>
int main(){
    int a[8];
    int asc=0,dsc=0;
    std::cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7];
    for(int i=0; i<4; i++){
        if(a[i]==i+1&&a[i]+a[7-i]==9)
            asc++;
        else if(a[7-i]==i+1&&a[i]+a[7-i]==9)
            dsc++;
    }
    if(asc==4)
        std::cout<<"ascending"<<'\n';
    else if(dsc==4)
        std::cout<<"descending"<<'\n';
    else
        std::cout<<"mixed"<<'\n';
    return 0;
}