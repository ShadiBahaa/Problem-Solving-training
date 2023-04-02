#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i<3; ++i)cin>>arr[i];
    sort(arr,arr+3);
    (arr[0]==arr[1] && arr[0]==5 && arr[2]==7)?cout<<"YES":cout<<"NO";
    cout<<endl;
}
