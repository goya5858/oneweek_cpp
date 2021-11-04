#include <iostream>
#include "../ヘッダ/prob2-1.h"

using namespace std;

int main(void){
    Keisan A;
    A.a = 1;
    A.b = 2;

    cout << "add:" << A.add() << endl;
    cout << "sub:" << A.sub() << endl; 
}