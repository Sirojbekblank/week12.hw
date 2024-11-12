//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
using namespace std;

int main() {
    int c,r;
    cin>>c>>r;
    int arr[c][r];
    for(int i=0;i<c;i++) {
        int sum=0;
        for(int j=0;j<r;j++) {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        cout<<sum<<endl;

    }
    return 0;
}