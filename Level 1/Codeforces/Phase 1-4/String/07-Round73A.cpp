#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> arr = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H","C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    vector<string> v(3);
    for (int i = 0; i<3; ++i)cin>>v[i];
    sort(v.begin(),v.end());
    do{
        auto it1 = find(arr.begin(),arr.end(),v[0]);
        auto it2 = find(it1+1,arr.end(),v[1]);
        auto it3 = find(it2+1,arr.end(),v[2]);
        if (it1==arr.end() || it2==arr.end() || it3==arr.end())continue;
        if (it2-it1==4 && it3-it2==3){
            cout<<"major"<<endl;
            return 0;
        }
        if (it2-it1==3 && it3-it2==4){
            cout<<"minor"<<endl;
            return 0;
        }
    }while (next_permutation(v.begin(),v.end()));
    cout<<"strange"<<endl;
}
