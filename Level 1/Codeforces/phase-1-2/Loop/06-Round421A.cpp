#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,v0,vi,a,l;
    cin>>c>>v0>>vi>>a>>l;
    int fact = 0;
    int cnt = 0;
    while (c>0)
    {
        if (v0+fact*a<=vi)
        {
            int x;
            if (cnt!=0)
                x = v0+fact*a-l;
            else x = v0+fact*a;
            c-=x;
            fact++;
        }
        else
        {
            int x = vi-l;
            c-=x;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}
