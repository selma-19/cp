
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    string s ;
    cin >>n;
    cin >> s;
    int a =count(s.begin(),s.end(),'A' ),
    d=count(s.begin(),s.end(),'D' );

    if (a>d)
        cout << "Anton" ;
    else if (d>a)
        cout << "Danik" ;
    else
        cout << "Friendship" ;


}
