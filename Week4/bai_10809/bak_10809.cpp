#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string alphabet="abcdefghijklmnopqrstuvwxyz";//문자먼저적기
    cin>>a;
    for(int i=0;i<alphabet.length();i++){  //알파벳의 개수만큼 반복시킴
        cout<<(int)a.find(alphabet[i])<<" "; //문자열.find(찾을문자)=>문자열의 몇번째에 그 문자가 있는지 나옴. 없다면 -1값 반환
    }
    return 0;
}
