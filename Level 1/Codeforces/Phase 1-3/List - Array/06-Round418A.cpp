#include <bits/stdc++.h>
using namespace std;
bool by(int x, int y){
    return x>y;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr1(n);
    vector<int> arr2(k);
    int cnt = 0;
    for (int i = 0; i<n; ++i)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i<k; ++i)
    {
        cin>>arr2[i];
    }
    sort(arr2.begin(),arr2.end(),by);
    int j = 0;
    for (int i = 0; i<n; ++i){
        if (arr1[i]==0){
            arr1[i] = arr2[j];
            j++;
        }
    }
    vector<int> arr3 = arr1;
    sort(arr3.begin(),arr3.end());
    if (arr3 == arr1){
        cout<<"No"<<endl;
    }else {
        cout<<"Yes"<<endl;
    }
}
