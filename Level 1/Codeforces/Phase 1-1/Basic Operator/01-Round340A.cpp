#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int ans = 0;
    if (x<=5){
        cout<<1<<endl;
    }else {
        cout<<x/5+(x%5!=0)<<endl;
    }
}
