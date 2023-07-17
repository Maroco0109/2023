#include <iostream>

int main() {
	int c, n, num;
	int avg;
	int score[1000] = { 0 };
	double result;

	std::cin >> c;
	for (int i = 0; i < c; i++) {
		avg = 0;
		num = 0;
		std::cin >> n;

		for (int j = 0; j < n; j++) {
			std::cin >> score[j];
			avg = avg + score[j];
		}
		avg = avg / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > avg)
				num++;
		}
		result = (double)num / n * 100;

		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << result << "%" << '\n';
	}
}