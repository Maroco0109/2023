#include<iostream>
#include<string>
#include<algorithm>
int cmp(std::string a, std::string b);
std::string words[20000];
int main(){
    int n,i=0;
    std::cin>>n;
    for(i;i<n;i++)
        std::cin>>words[i];
    sort(words,words+n,cmp);
    for (int i = 0; i < n; i++) {
		if (words[i] == words[i - 1]) {
			continue;
		}
		std::cout << words[i] << "\n";
	}
}
int cmp(std::string a, std::string b){
	if (a.length() == b.length()){
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}