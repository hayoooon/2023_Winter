#include <iostream>
using namespace std;

int main() {
    int n,sum;
    cin>>n;
    sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    cout<<sum;
    return 0;
}