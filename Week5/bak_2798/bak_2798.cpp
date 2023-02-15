#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int N[100]={0,},n,m;
    int sum=0;
    int max=0;

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum=N[i]+N[j]+N[k];
                if(sum<=m&&sum>max){
                    max=sum;
                }
            }
        }
    }
    cout<<max;

    return 0;
}
