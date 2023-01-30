#include <iostream>
#include <string>
using namespace std;

int main() {
    string n1,n2,a,b;
    cin>>n1>>n2;
    a=n1;
    b=n2;
    n1[0]=a[2];
    n1[2]=a[0];
    n2[0]=b[2];
    n2[2]=b[0];
    if(n1>n2)
        cout<<n1;
    else cout<<n2;

    return 0;
}
