#include <bits/stdc++.h>

using namespace std;
long long div(long long high,long long low ,long long n){
return (high/n-low/n);}
long long kth(long long n , long long k ){
    long long high=k,low=1,d=div(high,low,n);
    while(d!=0){
            low=high;
        high+=d;
    d=div(high,low,n);
    }
return(high);
}

int main()
{
    int t;
    long long n,k,res;
    cin>>t ;
    while(t--){
        cin>>n>>k;

        cout<<kth(n,k)<<endl;
    }


    return 0;
}
