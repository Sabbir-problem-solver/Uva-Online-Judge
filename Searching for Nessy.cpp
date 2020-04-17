#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n, m , tc;
	scanf("%d",&tc);
	while(tc--){
		scanf("%d %d",&n,&m);
		printf("%d\n",((n/3)*(m/3)));
	}
	return 0;
}
