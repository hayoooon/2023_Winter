#include <iostream>
using namespace std;

int main() {
    int day;
    cin>>day;
    if (day%4==0 && day%100!=0)
        cout<<"1";
    else if (day%400==0){
        cout<<"1";
    }
    else
        cout<<"0";
    return 0;
}
