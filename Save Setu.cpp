#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	int tc,sum=0; scanf("%d",&tc);
	while(tc--){
		cin >> s;
		if(s=="donate") {
			int n ;scanf("%d",&n);
			sum = sum+n; 
		}
		else if(s=="report") printf("%d\n",sum);
	}
	return 0;
}
