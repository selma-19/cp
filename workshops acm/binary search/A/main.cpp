#include <bits/stdc++.h>

using namespace std;
bool is_possible(long long a , long long b,long long m)
{
    return (((a+b)/4)>=m);
}

int main()
{
    long long t , a , b;
    cin>>t ;
    while(t--){
        cin>>a>>b;
        long long  last=-1,mid,low=0,high=min(a,b);
        while(low<=high){
         mid=low+(high-low)/2;


                if(is_possible(a,b,mid))
                   {low=mid+1;
                   if(last==mid)
                    break;
                   else
                   last=mid;}
                else
                    high=mid-1;}
                cout<<last<<endl;
    }






}
