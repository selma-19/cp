#include <bits/stdc++.h>
using namespace std;
int get_sum(int v[],int l ,int r){
if(l==0)
    return v[r];
else
    return (v[r]-v[l-1]);
}
int main(){
    int  n,l,el;
    cin>>n>>l;

    int v[n],u[n];
    for(int i=0;i<n;i++){
        cin >> el ;
        v[i]=(el);
    }


    for (int i=1;i<n;i++){
           v[i]+=v[i-1];
    }
    for (int i=0;i<n-l+1;i++){
           u[i]=get_sum(v,i,i+l-1);
    }
    cout<<min_element(u, u + n-l+1)-u+1;


    return 0;
}
