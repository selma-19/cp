#include <bits/stdc++.h>

using namespace std;
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))

typedef vector<int> vi;
int pow10(int n)
{
    int res = 1;
    while (n--)
    {
        res *= 10;
    }
    return res;
}
void print(vector<int> const &input)
{
    copy(input.begin(),
         input.end(),
         ostream_iterator<int>(cout, ""));
    cout<<endl;
}
void ReversedSum(string s1, string s2)
{
    vi v1,v2;
    int carry=0;
    for (int i=sz(s1)-1; i>=0; i-- )
    {
        v1.push_back(atoi(&s1[i])/(int)pow(10,((int)sz(s1))-i-1));
        s1.pop_back();
    }
    for (int i=sz(s2)-1; i>=0; i-- )
    {
        v2.push_back(atoi(&s2[i])/(int)pow(10,((int)sz(s2))-i-1));
        s2.pop_back();
    }
    //reverse(all(v1));
    //reverse(all(v2));
    v1.insert(v1.begin(),0);
    while(sz(v1)>sz(v2))
        v2.insert(v2.begin(), 0);
    for(int i=sz(v1)-1; i>=0; i--)
    {
        if (v1[i]+v2[i]+carry<10)
        {
            v1[i]=v1[i]+v2[i]+carry ;
            carry=0;
        }
        else
        {
            v1[i]=(v1[i]+v2[i]+carry)%10;
            carry=1;
        }
    }
    reverse(all(v1));
    while (!v1.empty() && v1.front() == 0)
    {
        v1.erase(v1.begin());
    }

    // Remove zeros from the end
    while (!v1.empty() && v1.back() == 0)
    {
        v1.pop_back();
    }
    print(v1);

}



int main()
{
    string s1,s2;
    int n ;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1>>s2;
        if (s1=="0")
            cout<<s2;
        else if(s2=="0")
            cout<<s1;
        else if ((s1=="0")&&(s2=="0"))
            cout<<0;
        else if (sz(s1)>sz(s2))
            ReversedSum(s1,s2);
        else ReversedSum(s2,s1);
    }
}
