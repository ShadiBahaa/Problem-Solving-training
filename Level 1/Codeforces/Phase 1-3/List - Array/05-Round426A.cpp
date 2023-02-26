#include <bits/stdc++.h>
using namespace std;
int main(){
    string cw = "v<^>";
    string ccw = "v>^<";
    char x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    int first = cw.find(x);
    int second = cw.find(y);
    bool ff = (first+n)%4==second%4;
    first = ccw.find(x);
    second = ccw.find(y);
    bool ss = (first+n)%4==second%4;
    if (!ff && !ss || (ss && ff)){
        cout<<"undefined"<<endl;
    }else if (ff){
        cout<<"cw"<<endl;
    }else {
        cout<<"ccw"<<endl;
    }
}
