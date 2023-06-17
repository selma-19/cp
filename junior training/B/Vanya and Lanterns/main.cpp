#include <bits/stdc++.h>

using namespace std;
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

typedef vector<int> vi;
void lanterns(vi v,int l )
{
    if (sz(v)==1)
        cout<<max(v[0],l-v[0]);
    else{
    int diff=v[1]-v[0];
    double  res ;
    for (int i=2; i<sz(v); i++)
    {
        if (v[i]-v[i-1]>diff)
            diff=v[i]-v[i-1];
    }
    //cout <<fixed<<"diff="<<diff<<endl;

    res=(double)diff/2;
     double x=l-v[sz(v)-1],x2=v[0];

     if (res<max(x,x2))
    {
        cout<<max(x,x2);
    }
    else
    {
        cout<<fixed<<res ;
    }

}}




int main()
{
    int n, l,el;
    vi v;
    cin >> n >> l ;
    while(n--)
    {
        cin>>el;
        v.push_back(el);
    }
    sort(all(v));
    /* if(v[0]!=0)
         v.insert(v.begin(),0);
     if (v[n-1]!=l)
         v.push_back(l);*/
    lanterns(v,l);
}
