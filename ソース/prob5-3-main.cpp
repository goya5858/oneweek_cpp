#include <iostream>
#include "../ヘッダ/prob5-3.h"

using namespace std;

int main(void){
    Counter c1, c2;
    c1.count();
    c2.count();
    c2.count();
    c2.reset();
    c1.count();
    c1.count();
    c2.count();
    cout << "c1のカウント数：" << c1.getCount() << endl;
    cout << "c2のカウント数：" << c2.getCount() << endl;
    cout << "トータルのカウント数:" << Counter::getTotalCount() << endl;
    return 0;
}