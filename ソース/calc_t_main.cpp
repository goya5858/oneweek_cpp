#include <iostream>
#include <string>
#include "../ヘッダ/calc_t.h"

using namespace std;

int main(void){
    CCalc<int> i1;
    CCalc<string> i2;
    i1.set(1,2);
    i2.set("ABC", "DEF");
    cout << i1.add() << endl << i2.add() << endl;
    return 0;
}