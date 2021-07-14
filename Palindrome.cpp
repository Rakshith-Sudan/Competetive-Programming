#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string ch;
	int count=0;
	cin >> ch;
	int l = ch.length();
	for(int i=0; i<l/2; i++){
		if(ch[i] != ch[l-i-1]){
			count = 1;
			break;
		}
	}
	if(count)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}

