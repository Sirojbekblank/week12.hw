//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b,c,e,d,sum=0;
    cin>>a>>b>>c>>e>>d;
    vector<int> v;
    for(int i=1;i<=d;i++) {
        v.push_back(i);
    }
    for(int j=1;j<=d;j++) {
        if(j%a==0) {
            v.pop_back();
            sum++;
        }
        else if(j%b==0) {
            v.pop_back();
            sum++;
        }
        else if(j%c==0) {
            v.pop_back();
            sum++;
        }
        else if(j%e==0) {
            v.pop_back();
            sum++;
        }
    }
    cout<<sum;
    return 0;
}