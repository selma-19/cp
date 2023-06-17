#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, el,s,prev=0,dollars=0;
    vector<int> v;
    cin >> n ;
    for (int i=0; i<n; i++)
    {
        cin >> el;
        v.push_back(el);
        s+=prev-el;
        prev=el;
        if (s<0)
        {dollars-=s;
        s=0;}

    }

    cout<<dollars;
}
