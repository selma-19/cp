#include <bits/stdc++.h>
using namespace std;

typedef vector<long long> vi ;
#define pb push_back
#define all(v) (v).begin(),(v).end()
long long m=1000000007;
long long power(long long b,long long a){
    long long res=1;
while(a){
        if(a&1)
        res=(b*res)%m;
        b=b*b%m;
        a=a>>1;}
        return res;

}

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n ,el,total=0;
        vi v;
        cin>>n;
        for(long long i=0;i<n;i++){
            cin>>el;
            v.pb(el);
        }
        sort(all(v));
        //max count
        long long i=n-1;
        for(long long mx:v){
                total=(total+(mx*(power(2,i))))%m;
                i--;
        }
        i=0;
           for(long long mx:v){
                total=(total+(mx*(power(2,i))))%m;
                i++;
        }
        cout<<(total*500000004)%m<<endl;

    }
    return 0;
}
