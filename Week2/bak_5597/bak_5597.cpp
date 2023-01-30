#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,num1,num2;
    bool arr[31]={0,};//모든 배열의 값 0으로 초기화
    for(int i=0;i<28;i++){
        cin>>n;
        arr[n]=1;
    }
    for (int j=1;j<=30;j++){
        if(arr[j]==0)
            cout<<j<<"\n";
    }
    return 0;
}