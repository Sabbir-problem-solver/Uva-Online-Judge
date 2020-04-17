#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n;
		scanf("%d",&n);
		//printf("%d ",n);
		int arr[n+1];
		int sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			sum = sum+arr[i];
		}
		//printf("%d ",sum);
		double avg=(double)sum/n;
		//printf("%lf ",avg);
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]>avg) count++;
		}
		//printf("%d ",count);
		double res = ((double)count/n)*100;
		printf("%.3lf%\n",res);
	}
	return 0;
}
