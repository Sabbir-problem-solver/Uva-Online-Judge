#include <bits/stdc++.h>

 
using namespace std;

 
#define looplr(i,l,r) for(int i=l;i<=r;++i)
#define rlooplr(i,l,r) for(int i=l;i>=r;--i)
#define FOReach(x,Z) for(__typeof((Z).begin()) x=(Z).begin();x!=(Z).end();++x)
#define loop(i,n) for(int i=0;i<n;++i)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define transformlwr(S) transform((S).begin(), (S).end(), (S).begin(), ::tolower);
#define transformupr(S) transform((S).begin(), (S).end(), (S).begin(), ::toupper);

 
const int MAX = 100000;
 
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    fastio;
     
	int arr[MAX];
	int n,sum=0,sum1=0,sum2=0,tc,x,y,z,count1=0,count2=0,rem,a,b,c,d,l,r,m,len;
	string s,s1,s2;
	while(getline(cin,s)){
		loop(i,s.size()){
			if(s[i]=='A'||s[i]=='B'||s[i]=='C') printf("2");
			else if(s[i]=='D'||s[i]=='E'||s[i]=='F') printf("3");
			else if(s[i]=='G'||s[i]=='H'||s[i]=='I') printf("4");
			else if(s[i]=='J'||s[i]=='K'||s[i]=='L') printf("5");
			else if(s[i]=='M'||s[i]=='N'||s[i]=='O') printf("6");
			else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S') printf("7");
			else if(s[i]=='T'||s[i]=='U'||s[i]=='V') printf("8");
			else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z') printf("9");
			else printf("%c",s[i]);
		}
		printf("\n");
	}
 
 
    //cout << clock()*1.0/ CLOCKS_PER_SEC << endl;
    return 0;
}
