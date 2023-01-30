#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,x,v,i;
    int arr[100];
    int count=0;
    cin>>n;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>v;
    for (i=0;i<n;i++){
        if(arr[i]==v)
            count++;
    }
    cout<<count<<"\n";

    return 0;
}