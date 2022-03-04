// https://codeforces.com/problemset/problem/1303/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int c=0, pos1=0, pos2=0;
        string s, a;
        cin>>s;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                pos1=i;
            
                break;
            }
        }
        
        for(int i=s.length(); i>=pos1; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                
                break;
            }
        }
        
        for(int i=pos1; i<pos2; i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else
            {
                a+='1';
            }
        }
        

        cout<<c<<endl;
    }
    
    return 0;
}
