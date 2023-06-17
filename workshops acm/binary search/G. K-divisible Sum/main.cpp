#include <bits/stdc++.h>

using namespace std;
bool is_possible(long long n , long long k , long long mid)
{
    return((mid*n)%k<=(mid-1)*(n-1));
}
int main()
{
    int t ;
    long long n,k;
    cin >> t ;
    while(t--){
        cin>>n>>k;
        long long high=k,low=1,mid,res;
        while(high>=low){
            mid=low+(high-low)/2;
            if(is_possible(n,k,mid)){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<res<<endl;
    }
    return 0;
}
