#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int max=0;
    double total=0;
    int grade[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>grade[i];
        if(grade[i]>max)
            max=grade[i];
        total+=grade[i];
    }
    total=(total/max*100)/n;

    cout<<fixed;
    cout.precision(2);
    cout<<total;
    return 0;
}