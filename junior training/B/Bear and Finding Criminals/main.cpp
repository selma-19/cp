#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, j=0,n,el ;
    vector <int> v, left, right ;
    cin >> n >> a ;
    for (int i=0; i<n ; i++)
    {
        cin >>el ;
        v.push_back(el);
        if (i<a-1)
            left.push_back(el);
        else if (i>a-1)
            right.push_back(el);
    }
    int criminals=v[a-1];



    reverse(left.begin(),left.end());

    if (right.size()>left.size())
    {


        for(int i=0; i < right.size(); i++)
        {
            if (i<left.size())
            {
                right[i]+=left[i];
                if (right[i]==2)
                    criminals+=2;
            }
            else
                criminals+=right[i];

        }
    }
    else
    {
/*
        for(int i=0; i < right.size(); i++)
            cout << right[i]<<'|';
        cout << endl;

        for(int i=0; i < left.size(); i++)
            cout << left[i]<<'|';
        cout << endl;*/
        for(int i=0; i < left.size(); i++)
        {

            if (i<right.size())
            {
                left[i]+=right[i];
                if (left[i]==2)
                    criminals+=2;
            }
            else
                criminals+=left[i];
        }
    }
    printVec(v);
        cout<<criminals;
    return 0;
}
