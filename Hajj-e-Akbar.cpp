#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    int i=0;
    while(cin >> s && s!="*"){
    //printf("%s",s);
        if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",++i);
        else printf("Case %d: Hajj-e-Asghar\n",++i);
    }
 
 
 
    return 0;
}
