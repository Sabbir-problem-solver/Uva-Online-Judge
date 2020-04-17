#include <bits/stdc++.h>
using namespace std;
int func(int n){
	//for 1st 
	double temp =sqrt(n);
	//printf("%lf\n",temp);
	//for 2nd
	int temp2 = (int)temp;
	
	if(temp==(double)temp2) return 1;
	else return 0;
		
	}
int main() {
	// your code goes here
	int i , j ;
	//func(16);
	while((scanf("%d %d",&i,&j)==2)&& i && j){
		int count =0;
		for(i=i;i<=j;i++){
			if(func(i)) ++count;
		}
		
		printf("%d\n",count);
	}
	return 0;
}
