#include <iostream>
#include <math.h>
void isPrime3(int n) {
	bool *isPrime = new bool[n+1];// n까지 구해야하므로, n+1개를 동적할당
	
	//먼저 모든 배열을 true로 초기화
	for (int i = 0; i <= n; i++) {
		isPrime[i] = true;
	}
 
 
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {//해당수가 소수라면, 출력하고 해당수를 제외한 배수들을 모두 제외
			std::cout << i << std::endl;
			for (int j = i * 2; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
}
int main(){
    int n, m;
    std::cin >> n >> m;
    isPrime3(m);
}