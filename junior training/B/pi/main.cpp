#include <bits/stdc++.h>

using namespace std;
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
typedef vector<int> vi;
int gcd(int a, int b )
{
    if (b==0)
        return a;
    return gcd(b,a%b);

}
//count ll les elements premiers entre eux
void pi(vi v,int n ){
    //cout.precision(6);
    int c=0,pairs=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (gcd(max(v[i],v[j]),min(v[i],v[j]))==1)
            c++;
    }
}
if (c==0)
    cout<<"No estimate for this data set."<<endl;
else {
//pi=sqrt((6/c)*(n*(n-1)/2));
printf("%0.6f\n",sqrt(6.000000*(n*(n-1)/2)/c));
//cout <<setprecision(6)<<fixed<<pi<<endl;
}}


int main()
{
    int n ,el;
    cin >>n ;

    vi v;
    while(n!=0){
        for(int i=0;i<n;i++){
                cin>>el;
            v.push_back(el);
        }
        pi(v,n);
        v.clear();
        cin>>n;
    }
}
