#include <iostream>
#include <string>
using namespace std;

int main() {
    int num[9][9]={};
    int max=-10;
    int row=0;
    int cols=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>num[i][j];
            if(num[i][j]>max){
                max=num[i][j];
                cols=i+1;
                row=j+1;
            }
        }
    }

    cout<<max<<"\n"<<cols<<" "<<row;
    return 0;
}