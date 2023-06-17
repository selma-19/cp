#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl ;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define sz(x) ((int)(x).size())
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define endl '\n'

const int MOD = (1e9)+7 ;
const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF = 10000;
void yes(){
    cout<<"YES\n";
}
void no(){
    cout<<"NO\n";
}

vl prefix(vl v,ll n){
    int i=(int) v.size() +1;
    while((int)v.size()<n){
        v.push_back(v.back()+i);
        i++;
    }
    return(v);

}

int main()
{
    ll t ,n,el;
    cin>>t;
    while(t--){
        cin>>n;
        ll one,two,m,mm;
        for(int i=1;i<=n;i++){
                cin>>el;
                if(el==1)
                    one=i;
                else if(el==2)
                    two=i;
                else if (el==n)
                    m=i;
                else if(el==n-1)
                    mm=i;

             }

        if(((m<one)&&(m>two))||((m>one)&&(m<two)))
            cout<<1<<" "<<1<<endl;
        else{
                if((one-two==1)||(one-two==-1))
                {
                    if((one-m==1)||(one-1==-1)){
                            cout<<mm<<" "<<two<<endl;

                    }
                    else        cout<<two<<" "<<m<<endl;


                }
        else if(one<two)
            cout<<one+1<<" "<<m<<endl;
        else
            cout<<two+1<<" "<<m<<endl;
        }

        }



    return 0;
}
