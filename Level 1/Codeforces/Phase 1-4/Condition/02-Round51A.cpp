#include <bits/stdc++.h>
using namespace std;
int n;
int getNext(int x)
{
    if (x<n)
    {
        return x+1;
    }
    return 1;
}
int main()
{
    cin>>n;
    int x = 1;
    int k = 1;
    map<int,bool> vis;
    while (true)
    {
        int tmp = k+1;
        while (k--)
        {
            x = getNext(x);
        }
        vis[x] = true;
        if (vis.size()==n){
            cout<<"YES"<<endl;
            return 0;
        }
        if (tmp>2*n)break;
        k = tmp;
    }
    cout<<"NO"<<endl;
}
