#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int cnt1 = 0,cnt2 = 0;
    int sum = 0;
    for (int i = 0; i<n; ++i){
        cin>>x;
        sum+=x;
        (x==100)?cnt1++:cnt2++;
    }
    if (sum%200!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    int h = sum/2;
    bool ans = false;
    for (int i = 0; i<=cnt2; ++i){
        if (200*i<=h && h-200*i<=cnt1*100){
            ans = true;break;
        }
    }
    cout<<((ans)?"YES":"NO")<<endl;
}
