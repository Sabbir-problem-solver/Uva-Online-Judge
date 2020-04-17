#include <bits/stdc++.h>
using namespace std;
int func(long long n){
	long long count =0;
	while(n!=1){
		if(n%2==0) {n = n/2; ++count;}
		else {n=(3*n)+1; ++count;}
 
	}
	return count+1;
}
int main() {
	// your code goes 
	long long n,m,ans;
	while(scanf("%lld %lld",&n,&m)==2){
		printf("%lld %lld ",n,m);
		if(n>m){
			int temp = m;
			m=n;
			n=temp;
		}
		//int arr[1000005];
		long long max =0;
		for(long long i =n;i<=m;i++){
			ans=func(i);
			if(ans>max) max=ans;
			else max=max;
 
		}
		printf("%lld\n",max);
	}
	return 0;
}
