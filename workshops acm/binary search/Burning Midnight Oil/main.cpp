#include <bits/stdc++.h>

using namespace std;
bool is_suffisant(long long v , long long k,long long n)
{
    long long i=0,s=0;
  while((s<n)&&(v/pow(k,i)!=0)){
    s+=v/pow(k,i);
    i++;
  }
  if(s>=n)
    return true ;
  else return false;
}

int main()
{
    long long n,k;
    cin>>n>>k;
    long long last,low=1,high=n,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(is_suffisant(mid,k,n)){
                last=mid;
            high=mid-1;
        }
        else low=mid+1;

        }

    cout<<last;
}
