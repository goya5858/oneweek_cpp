#include <iostream>
#include "../ヘッダ/vector.h"

using namespace std;

int main(void){
    Vector *v1, *v2;
    v1 = new Vector();
    v2 = new Vector(1.1,2.3);
    v1->set(3.8, 2.7);
    cout << "v1 =(" << v1->getX() << " , " << v1->getY() << ")" << endl;
    cout << "v2 =(" << v2->getX() << " , " << v2->getY() << ")" << endl;
    delete v1;
    delete v2;
    return 0;
}