/*#include <bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string s ;
    cin >> s;
    if(s.length()==1)
        cout<<s;
    else {
        int a=0;
        while(s.length()>10){
                a=0;
        for (int i=0;i<s.length();i++)
            a+=stoi(s[i]);
        s=to_string(a);

    }
    cout<<s;

}}*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s ;
    int n=0;
    cin >> s;
    if(s.length()==1)
        cout<<0;
    else {
        int a=0;
        while(s.length()>=2){
                n++;
                a=0;
        for (int i=0;i<s.length();i++)
            a+=stoi(string(1, s[i]));
        s=to_string(a);


    }
    cout<<n;}
}
