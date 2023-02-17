#include <bits/stdc++.h>
using namespace std;
int main(){
    string init1, init2;
    cin>>init1>>init2;
    cout<<init1<<" "<<init2<<endl;
    int n;
    cin>>n;
    while (n--){
        string a,b;
        cin>>a>>b;
        if (a==init1){
            init1 = b;
        }else if (a==init2)
        {
            init2 = b;
        }
        cout<<init1<<" "<<init2<<endl;
    }
}
