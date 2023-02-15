#include <iostream>
using namespace std;

int six_number(int a,int b,int c,int d,int e){
    int f=(a*a+b*b+c*c+d*d+e*e)%10;
    return f;
}
int main() {
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<six_number(a,b,c,d,e);
    return 0;
}
