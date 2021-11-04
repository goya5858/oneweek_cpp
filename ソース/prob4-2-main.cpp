#include <iostream>
#include <string>
#include "../ヘッダ/prob4-2.h"

using namespace std;

int main(void){
    Hoge *AA;
    AA = new Hoge();
    AA->foo();
    delete AA;
    return 0;
}