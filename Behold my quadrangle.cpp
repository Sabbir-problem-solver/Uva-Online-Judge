#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;scanf("%d",&tc);
	int arr[5];
	while(tc--){
		for(int i =0;i<4;i++){
			scanf("%d",&arr[i]);
	}
	sort(arr,arr+4);
	if(arr[0]==arr[1] && arr[1]==arr[2] && arr[2]==arr[3])printf("square\n");
	else if (arr[0]==arr[1] && arr[2]==arr[3]) printf("rectangle\n"); 
	else if (arr[0]+arr[1]+arr[2]>=arr[3]) printf("quadrangle\n");
	else printf("banana\n");
	}
	return 0;
}
