#include <iostream>
using namespace std;

int d(int number){ //n과 n의 각 자리 함수를 더하는 함수
    int sum = number;

    while(number!=0){
        sum=sum+(number%10);
        number=number/10;
    }
    return sum;
}
int main() {
    int list[10001]={0,},n;
    for(int i=0;i<10001;i++){
        n=d(i);
        if (n<10001){ //생성되면 그 자리는 1로 바꾸기
            list[n]=1;
        }
        if (list[i]!=1){ //셀프 넘버 출력
            cout<<i<<"\n";
        }
    }
    return 0;
}
