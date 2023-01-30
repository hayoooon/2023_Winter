#include <iostream>
using namespace std;

int main() {
    int n,num,value;
    int count=0;
    cin>>n;
    num=n;
    while(1){
        value=(n%10)*10+(n/10+n%10)%10;
        count++;
        n=value;
        if (num==value)
            break;
    }
    cout<<count;
    return 0;
}