#include <iostream>
#include <string>
using namespace std;

int main() {
    int c,n,avg,count;
    int grade[1000]={0};//점수 배열 0으로 초기화
    double percent;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>n;
        avg=0;
        count=0;
        for(int j=0;j<n;j++){
            cin>>grade[j];
            avg+=grade[j];
        }
        avg=avg/n;
        for(int j=0;j<n;j++){
            if(avg<grade[j])
                count++;
            percent=(double)count/n*100;
        }
        cout<<fixed;
        cout.precision(3);
        cout<<percent<<"%"<<"\n";
    }
    return 0;
}