#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        if (i%3==0)chest+=x;
        else if (i%3==1)biceps+=x;
        else back+=x;
    }
    if (chest>= biceps && chest>=back)cout<<"chest"<<endl;
    else if (biceps>=chest && biceps>=back)cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}
