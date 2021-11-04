#include <iostream>
#include <string>
#include "../ヘッダ/prob3-2.h"

using namespace std;

int main(void){
    TwoStrings SS;
    SS.setString1("one");
    SS.setString2("Two");
    cout << SS.getString1() << " " << SS.getString2() << endl;
    cout << SS.getConnectedString() << " " << SS.getConnectedLength() << endl;
}