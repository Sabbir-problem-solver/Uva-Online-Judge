#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef long long int li;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
 
#define looplr(i,l,r) for(int i=l;i<=r;++i)
#define rlooplr(i,l,r) for(int i=l;i>=r;--i)
#define FOReach(x,Z) for(__typeof((Z).begin()) x=(Z).begin();x!=(Z).end();++x)
#define loop(i,n) for(int i=0;i<n;++i)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define transformlwr(S) transform((S).begin(), (S).end(), (S).begin(), ::tolower);
#define transformupr(S) transform((S).begin(), (S).end(), (S).begin(), ::toupper);
 
#define pb push_back
#define all(s) (s).begin(),(s).end()
#define SZ(X) ((int)(X).size())
#define CLR(X,x) memset(X, x, sizeof(X))
 
#define mp make_pair
#define F first
#define S second
#define sq(A) A*A
 
 
const int MAX = 100000;
const int INF = 1000000001;
const li  INF64 = 1e18;
const int MOD = 1e9 + 7;
const ld  PI = acosl(-1.0);
const ld  EPS = 1e-9;
 
// Binary predicate 
int compare(const void* a, const void* b){ 
    return ( *(int*)a - *(int*)b );
  // int ARR_SIZE = sizeof(arr) / sizeof(arr[0]); 
} //int* p = (int*) bsearch(&key1, arr, ARR_SIZE, sizeof(arr[0]), compare);
 
// Function for binary_predicate 
bool compare(int a, int b) 
{ 
    return (abs(a) == abs(b)); 
} // frdlist.unique(compare);
 


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    fastio;
     
	int tc;
	//scanf("%d",&tc);
	cin >> tc;
	//scanf("\n");
	cin.ignore();
	int count2=0;
	while(tc--){
		string s;
		getline(cin,s);
		int len = s.size();
		//cout << s << endl; // eikhane Output faka keno ? /* --*/ comment out kore nile full ans paben 
		int count1=0;
		for(int i =0;i<len;i++){
			if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w')
				count1++;
			else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
				count1+=2;
			else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
				count1+=3;
			else if(s[i]=='s'||s[i]=='z') count1+=4;
			else  count1++;
		}
		
		printf("Case #%d: %d\n",++count2,count1);
	}
 
 
    //cout << clock()*1.0/ CLOCKS_PER_SEC << endl;
    return 0;
}
