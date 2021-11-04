#include <iostream>
#include <string>
#include "../ヘッダ/prob5-2.h"

using namespace std;

int main(void){
    Object *o1, *o2, *o3;
    o1 = new Object();
    o2 = new Object();
    o3 = new Object();
    cout << o1->getObjectNum() << endl;
    delete o1;
    cout << Object::getObjectNum() << endl;
    delete o2;
    cout << o3->getObjectNum() << endl;
    delete o3;
    cout << Object::getObjectNum() << endl;
    return 0;
}