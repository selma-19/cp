#include<bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b )
{
    if (b==0)
        return a;
    return gcd(b,a%b);

}

int lcm(int a, int b )
{
    return (a*b)/gcd(a,b);
}
//10^16=(10^8)^2
//10^17=(10^8)^2*10
//bch nab9ou kol marra na9smou 3la 2 w nekhdmou hakeka

int power (int a, int b)
{
//bch ne7sbou a^b
    if (!b) return 1;
    int res;
    res=pow(a,b>>1);//pow(2,2), pow(2,1),pow(2,0)
    res=res*res;//    res=pow(2,2)*pow(2*2), res=pow(2,1)*pow(2,1)

    if (b&1)
        res*=a;

    return res;
}

int main()
{
    int n ;
    cin >>n;
    cout<<power(2,n);
}
