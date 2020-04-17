#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc,n;scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        int ans = ((((((n*567)/9)+7492)*235)/47)-498);
        int temp = ans%100;
        int res = temp/10; 
        printf("%d\n",abs(res));
    }
    return 0;
}
