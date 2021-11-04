#include <iostream>
#include <string>
#include "../ヘッダ/prob3-1.h"

using namespace std;

int main(void){
    CData = data;
    data.init();
    cout << data.number << " " << data.comment << endl;
    data.setter(10, "aaa");
    cout << data.getter() << endl;
    return 0;
}