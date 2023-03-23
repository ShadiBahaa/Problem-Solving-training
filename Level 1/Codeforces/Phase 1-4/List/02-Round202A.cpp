#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, f = 0;
    int n,x;
    cin>>n;
    for (int i = 0; i<n ; ++i)
    {
        cin>>x;
        if (x==25){
            t++;
        }else if (x==50){
            if (t){
                t--;
                f++;
            }else {
                cout<<"NO"<<endl;
                return 0;
            }
        }else {
            if (t>=1 && f){
                t--;
                f--;
            }else if (t>=3){
                t-=3;
            }else {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
