#include <iostream>
#include "../ヘッダ/position2d.h"

using namespace std;

int main(void){
    Position2D p;
    p.setValue(1,1);
    p.move(2,3);
    cout << "p:(" << p.getX() << "," << p.getY() << ")" << endl;
    p.resetPosition();
    cout << "p:(" << p.getX() << "," << p.getY() << ")" << endl;
    return 0;
}