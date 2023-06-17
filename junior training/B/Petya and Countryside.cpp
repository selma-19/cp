#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,el,m=1 ;
    vector <int> v, left;
    cin >> n ;
    for (int i=0; i<n; i++)
    {
        cin>>el ;
        v.push_back(el);
        left.push_back(1);
    }
    for (int i=0; i<n; i++)
    {
        for(int j=i; j-1>=0; j--)
        {
            if(v[j]>=v[j-1])
                left[i]++;
            else
                break;
        }
        for(int j=i; j+1<n; j++)
        {
            if(v[j]>=v[j+1])
                left[i]++;
            else
                break;
        }

    }
    /*for (int i=0; i<n; i++)
    {cout << left[i];
     cout << "|";
     }
     cout<<endl;*/

    cout<<*max_element(left.begin(), left.end());;



}
