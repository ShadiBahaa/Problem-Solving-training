#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt1 = 0;
    int cnt2 = 0;
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for (int i = 0; i<(2*n); ++i){
        if (i%2){
            cin>>arr2[i/2];
            cnt2+=arr2[i/2]%2;
        }else {
            cin>>arr1[i/2];
            cnt1+=arr1[i/2]%2;
        }
    }
    if ((cnt1+cnt2)%2){
        cout<<-1<<endl;
    }else {
        if (cnt1%2==0){
            cout<<0<<endl;
        }else {
            for (int i = 0; i<n; ++i){
                if (arr1[i]%2 != arr2[i]%2){
                    cout<<1<<endl;
                    return 0;
                }
            }
            cout<<-1<<endl;
        }
    }
}
