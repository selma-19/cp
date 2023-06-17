#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> shops;
    long long n , q ,el;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>el;
        shops.push_back(el);
    }
    sort(shops.begin(),shops.end());
    cin>>q;
    while(q--){
            cin>>el;
    if(el<shops[0])
        cout<<0<<endl;
else

    cout<<upper_bound(shops.begin(),shops.end(),el)-shops.begin()<<endl;
    }
    return 0;
}
