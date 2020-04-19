#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	int count = 1;
	while(cin >> s ){
		for(int i=0;i<s.size();i++){
			if(s[i]=='"') {
				count++;
				if(count%2==0) printf("``");
				else printf("''");
			}
			else cout << s[i];
			
			
		}
		printf("\n");
	}
	return 0;
}
