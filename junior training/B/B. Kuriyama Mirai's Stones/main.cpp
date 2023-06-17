#include <bits/stdc++.h>
using namespace std;
long long get_sum(long long v[],long long l ,long long r){
if(l==1)
    return v[r-1];
else
    return (v[r-1]-v[l-2]);
}
int main(){
    long long  n,el,l,r,m,type;
    cin>>n;

    long long v[n],u[n];
    for(long long i=0;i<n;i++){
        cin >> el ;
        v[i]=(el);
        u[i]=(el);
    }

    sort(v, v+n);

    for (long long i=1;i<n;i++){
           v[i]+=v[i-1];
           u[i]+=u[i-1];
    }
    cin >>m;
    while (m--){
    cin>>type>>l>>r;

    if(type==1)
    cout << get_sum(u,l,r)<<endl;
    else
        cout<<get_sum(v,l,r)<<endl;
    }


    return 0;
}
