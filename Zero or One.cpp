#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a , b, c, tc;
	//scanf("%d",&tc);
	while(scanf("%d %d %d",&a,&b,&c)==3){
		if(a!=b && a!=c) printf("A\n");
		else if(b!=a && b!=c) printf("B\n");
		else if(c!=a && c!=b) printf("C\n");
		else printf("*\n");
	}
	return 0;
}
