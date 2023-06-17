/*if(sz(v2)>sz(v1))
    {  v2.push_back(0);
        while(sz(v2)>sz(v1))
            v1.push_back(0);
        for(int i=0; i<sz(v2); i++)
        {
            if (v1[i]+v2[i]+carry>10)//9999 9999=>89991
            {
                if (i!=sz(v2)-1)
                {
                    v2[i]=(v1[i]+v2[i]+carry)%10;
                    carry=1;
                }
                else v2[i]=(v1[i]+v2[i]+carry)/10;
            }
            else if (v1[i]+v2[i]+carry==10)
            {
                if (i!=sz(v2)-1)
                {
                    carry=1;
                    v2[i]=0;
                }
                else v2[i]=1;
            }
            else
            {
                v2[i]=v1[i]+v2[i]+carry;
                carry=0;
            }
        }
        int j=0;
        while (j  < sz(v2) && v2[j] == 0)
        {
            v2.erase(v2.begin() + j);
        }
        if (v2[sz(v2)-1]==0)
            v2.pop_back();
        print(v2);
    }

    else
    {  v1.push_back(0);
        while(sz(v1)>sz(v2))
            v2.push_back(0);
        for(int i=0; i<sz(v1); i++)
        {
            if (v1[i]+v2[i]+carry>10)
            {
                if (i!=sz(v1)-1)
                {
                    v1[i]=(v1[i]+v2[i]+carry)%10;//74 55=>201
                    carry=1;
                }
                else v1[i]=(v1[i]+v2[i]+carry)/10;
            }

            else
            {
                v1[i]=v1[i]+v2[i]+carry;
                carry=0;
            }

        }
        int j=0;
        while (j  < sz(v1) && v1[j] == 0)
        {
            v1.erase(v1.begin() + j);
        }
        if (v1[sz(v1)-1]==0)
            v1.pop_back();
        print(v1);
    }

    cout<<endl;*/
