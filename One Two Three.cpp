#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	int tc; scanf("%d",&tc);
	while(tc--){
		cin >> s;
		if(s.size()==3){
			if ((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')) printf("1\n");
			else printf("2\n");
		}
		else printf("3\n");
	}
	return 0;
}
