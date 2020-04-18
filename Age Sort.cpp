#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	//int tc;
	//scanf("%lld",&n);
	while(scanf("%lld",&n)==1 && n){
		long long arr[n+1];
		for(int i=0;i<n;i++){
			scanf("%lld",&arr[i]);
		}
		sort(arr,arr+n);
			for(int i=0;i<n;i++){
			if(i<n-1) printf("%lld ",arr[i]);
			else printf("%lld",arr[i]); 
		}
		printf("\n");
	}
	return 0;
}
