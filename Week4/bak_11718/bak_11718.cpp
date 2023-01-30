#include <iostream>
#include <string>
using namespace std;

int main() {
    string letter;
    while(true){
        getline(cin,letter);
        if(letter=="")
            break;
        cout<<letter<<endl;
    }
    return 0;
}
