#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a , b ,c,tc;
	scanf("%d",&tc);
	int i =0;
	while(tc--){
		scanf("%d %d %d",&a,&b,&c);
		if(a<=20 && b<=20 && c<=20) printf("Case %d: good\n",++i); 
		else printf("Case %d: bad\n",++i);
	}
	return 0;
}
