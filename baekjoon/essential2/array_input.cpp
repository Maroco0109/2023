#include <iostream>
#include <string>		// Áß¿ä!
using namespace std;

int n;
string strArr[50];

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);

	cin >> n;
	string temp;
	for (int i = 0; i < n; i++) {
		cin >> strArr[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << strArr[i][j] << " ";
		}	
		cout << "\n";
	}

	return 0;
}