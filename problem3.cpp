//
// Created by Sirojbek on 11/12/2024.
//
#include <iostream>
using namespace std;

int main() {
    int c,r;
    cin>>c;
    cin>>r;
    int arr[c][r];
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int nC,nR,N;
        cin>>nC>>nR>>N;
        arr[nC-1][nR-1]=N;
    }
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}