#include <bits/stdc++.h>

using namespace std;

bool is_possible(long long n , long long k , long long mid){
   k=k*(k+1)/2-(k-mid)*(k-mid+1)/2 -mid+1;
   return(k>=n);
}

int main()
{
    long long n,k;

    cin>>n>>k;
    if(n==1){
        cout<<0;
        return 0;
    }
    if((k*(k+1)/2)-k+1<n)
    {
        cout<<-1;
        return 0;
    }
    if(n==k){
        cout<<1;
        return 0;
    }
    long long high=k,low=1,mid,res=-1;
    while(high>=low){
        mid=low+(high-low)/2;
        if(is_possible(n,k,mid)){
            if(res==mid)
            break;

            res=mid;
            high=mid-1;
        }
        else low=mid+1;
    }

        cout<<res;
    return 0;
}
