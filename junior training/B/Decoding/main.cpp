#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m;
    string s ,mid;
    cin >> n;
    cin >> s ;
    int i=3;
    while(i<=n){
            m=i/2;
    if (i%2==0)
        m--;
    mid=s[n-i];
    s.erase(n-i,1);
    s.insert(n-i+m,mid);

    i++;

    }
    cout<<s;
}
