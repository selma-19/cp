#include <bits/stdc++.h>

using namespace std;
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

typedef vector<int> vi;

int main()
{
   int a , b , c , d, t  ;
   cin >>t ;
   while(t--){
   cin >> a >>b>>c>>d ;
//cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
   if (((a+d)!=(b+c))||(a<0)||(c<0)||(b>0)||(d>0)||((a==b)&&(a!=0))||((d==c)&&(b!=0)))
    cout<<-1<<endl;
    else if ((a==b)&&(a==0)&&(d==c)&&(c==0)){
        cout<<1<<endl<<0<<endl;
    }
   else
   {

    cout <<3<<endl; ;
   cout<<b<<" "<<a-b<<" "<<d<<endl;
   }}

}
