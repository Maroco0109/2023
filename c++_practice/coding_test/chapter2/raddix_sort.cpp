/*
�������: �� ��x -> �ڸ����� ��
�ð����⵵: O(kn), k == �������� �ڸ��� : �ڸ��� ��ŭ queue 1���� ���� ������

�ٽ� �̷�
10���� **ť �̿�, ť�� ���� �ڸ��� ��ǥ -> 0~9 ������ ��� ���� 10���� ť ���
1) ���� �ڸ����� �������� ������ ���� -> ť�� ����Ͽ� �� ��� ��, ���� �ڸ� ���ڴ� ���� �Ǿ�����
2) ���� �ڸ����� �������� ������ ���� -> ���� ť�� ����Ͽ� �� ��� ��, ���� �ڸ� ���ڴ� ���� �Ǿ� ����(���� �ڸ� ���ڴ� �̹� ���ĵ�)
3) ...
*/
/*
���� 10989
�� �����ϱ� 3
Q. N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
input: ù° �ٿ� ���� ���� N(1 �� N �� 10,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���� �־�����. �� ���� 10,000���� �۰ų� ���� �ڿ����̴�
output: ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�

- �ڸ��� ���ϴ� �Լ� �ʿ�
- �ڸ����� ���� �� ���� �ڸ��� �� �ʿ�
- �ְ� �ڸ��� k�� �ʿ�
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
void radix_sort(std::vector<int> &arr, int n);

int main(){
    int n;
    std::cin>>n;
    std::vector<int> arr(n);

    for (int i=0; i<n; i++)
        std::cin>>arr[i];

    radix_sort(arr, n);

    for (int i=0; i<n; i++)
        std::cout<<arr[i]<<'\n';
}

void radix_sort(std::vector<int> &arr, int n){
    int max_val = *std::max_element(arr.begin(), arr.end());        // ���� �ϰ��� �ϴ� �迭�� �ִ밪
    int digit = (max_val ==0) ? : ((int)log10(max_val)+1);          // ���� �ϰ��� �ϴ� �迭�� �ִ밪�� �ڸ���

    std::queue<int> a[10];

    for(int i=1; i<digit; i*=10){
        for(int j=0; j<n; j++){
            int k=0;
            if(arr[j]>=i)
                k=(arr[j]/i)%10;
            a[k].push(arr[j]);
        }
        int idx = 0;
        for(int j=0; j<10; j++){
            while(!a[j].empty()){
                arr[idx]=a[j].front();
                a[j].pop();
                idx++;
            }
        }
    }
}