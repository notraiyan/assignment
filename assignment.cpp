#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "scott tiger mushroom";
    string delimiter = " ";
    int k=0,i,pos=0;
    string token[s.length()];
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            token[k++]=s.substr(0,i);
            s.erase(0, i + 1);
            i=-1;
        }
        else  if(i==s.length()-1)
            token[k++]=s.substr(0,i+1);
    }
    for(i=k-1;i>=0;i--)
        cout<<token[i]<<token[i].length()<<endl;
}
