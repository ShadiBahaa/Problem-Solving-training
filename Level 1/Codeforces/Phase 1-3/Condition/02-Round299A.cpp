#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr1[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string arr2[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string arr3[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string n;
    cin>>n;
    if (n.size()==1){
        cout<<arr1[n[0]-'0']<<endl;
    }else {
        if (n[0]=='1'){
            cout<<arr2[n[1]-'0']<<endl;
        }else {
            cout<<arr3[n[0]-'0'];
            if (n[1]!='0')
            cout<<"-"<<arr1[n[1]-'0'];
            cout<<endl;
        }
    }
}
