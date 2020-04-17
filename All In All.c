#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s ,s1;
	while(cin >> s >> s1){
		int n , m ,p;
		n= s.size();
		m=s1.size();
		p=0;
		for(int i=0;i<m;i++){
			if(s[p]==s1[i]) ++p;
		}
		if(n==p) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
