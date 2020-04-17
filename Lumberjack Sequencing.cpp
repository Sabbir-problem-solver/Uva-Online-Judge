#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;scanf("%d",&tc);
	printf("Lumberjacks:\n");
	while(tc--){
		
		int arr[11];
		//int arr2[11];
		//int x1, x2; 
		scanf("%d %d",&arr[0],&arr[1]);
		if(arr[0]>arr[1]){
			for(int i = 2;i<10;i++){
				scanf("%d",&arr[i]);
				//arr2[i]=arr[i];
		}
		int flag=1; 
			for(int i = 2;i<10;i++){
				if(arr[i-1]<arr[i]) {flag=0;break;}
		}
		if(flag==1) printf("Ordered\n");
		else printf("Unordered\n");
		}
		
		else {
			for(int i = 2;i<10;i++){
				scanf("%d",&arr[i]);
				//arr2[i]=arr[i];
		}
		int flag=1; 
			for(int i = 2;i<10;i++){
				if(arr[i-1]>arr[i]) {flag=0;break;}
		}
		if(flag==1) printf("Ordered\n");
		else printf("Unordered\n");
		}
		
		/*for(int i = 0;i<10;i++){
			scanf("%d",&arr[i]);
			arr2[i]=arr[i];
		}*/
		/*
		sort(arr,arr+10);
		for(int i = 0;i<10;i++){
			printf("%d ",arr[i]);
		}
		int flag = 1;
		for(int i = 0;i<10;i++){
			if(arr2[i]!=arr[i]) {flag = 0;break;}
		}
		if(flag==1) printf("Ordered\n");
		else printf("Unordered\n");
	*/
	}
	return 0;
}
