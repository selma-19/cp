#include <bits/stdc++.h>

using namespace std;

int main()
{        vector<string> v ;
    string ab,bc,ca;
    cin >>ab;
    cin>>bc;
    cin>>ca;

    v.push_back(ab);
    v.push_back(bc);
    v.push_back(ca);
    for (int i=0; i<3;i++){
        if ((count(v[i].begin(),v[i].end(),'A')==1)&&(count(v[i].begin(),v[i].end(),'B')==1))
            ab=v[i];
        else if ((count(v[i].begin(),v[i].end(),'A')==1)&&(count(v[i].begin(),v[i].end(),'C')==1))
            ca=v[i];
        else if ((count(v[i].begin(),v[i].end(),'B')==1)&&(count(v[i].begin(),v[i].end(),'C')==1))
            bc=v[i];
    }

    if(ab[0]!='A')
    {
        reverse(ab.begin(),ab.end());
        if (ab[1]=='<')
            ab[1]='>';
        else
            ab[1]='<';
    }


    if(bc[0]!='B')
    {
        reverse(bc.begin(),bc.end());
        if (bc[1]=='<')
            bc[1]='>';
        else
            bc[1]='<';

    }


    if(ca[0]!='C')
    {
        reverse(ca.begin(),ca.end());
        if (ca[1]=='<')
            ca[1]='>';
        else
            ca[1]='<';
    }

    //cout<<endl<<ab<<endl<<bc<<endl<<ca<<endl;

    if (ab[1]=='<')//a<b   AB
    {
        if ((ca[1]=='<')&&(bc[1]=='>'))//a>c et b>c
            cout<<"CAB";
        else if ((ca[1]=='>')&&(bc[1]=='<'))//a<c et b<c
            cout<<"ABC";
        else if ((ca[1]=='>')&&(bc[1]=='>'))//a<c et b>c
            cout << "ACB";
        else
            cout <<"Impossible";
    }
    if (ab[1]=='>')//a>b
    {
        if ((ca[1]=='<')&&(bc[1]=='<'))
            cout<<"BCA";
        else if ((ca[1]=='>')&&(bc[1]=='<'))
            cout<<"BAC";
        else if ((ca[1]=='<')&&(bc[1]=='>'))
            cout << "CBA";
        else
            cout <<"Impossible";
    }
}
