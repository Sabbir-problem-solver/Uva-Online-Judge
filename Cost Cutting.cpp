#include <bits/stdc++.h>
using namespace std;
int n=3,c=0;
int main() {
	// your code goes here
	int arr[n+2];
	int i,tc; scanf("%d",&tc);
	while(tc--){
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
		//printf("%d\n",arr[i]);
	}
	sort(arr,arr+n);
	printf("Case %d: %d\n",++c,arr[1]);
}
	return 0;
}
