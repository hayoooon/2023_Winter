#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,x,y;
    int count=0;
    int paper[100][100]={0};
    int size[2];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        for(int j=x;j<x+10;j++){
            for(int k=y;k<y+10;k++){
                paper[j][k]=1;
            }
        }
    }
    for(int i=0; i<100;i++){
        for(int j=0;j<100;j++){
            if(paper[i][j]==1)
                count++;
        }
    }
    cout<<count;
    return 0;
}