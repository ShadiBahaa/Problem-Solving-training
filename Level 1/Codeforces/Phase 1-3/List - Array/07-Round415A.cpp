#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    double arr[n];
    for (int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    int tmp = 0;
    int cnt = n;
    double sum = accumulate(arr,arr+n,0);
    while (true){
        if ((int)round(sum/cnt)==k){
            cout<<tmp<<endl;
            return 0;
        }
        sum+=k;
        cnt++;
        tmp++;
    }
}
