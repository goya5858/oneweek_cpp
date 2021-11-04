#include "../ヘッダ/ccar.h"
#include <iostream>

using namespace std;
int main(void){
    CCar * pCar = 0;
    pCar = new CCar();
    pCar->supply(10);
    pCar->move();
    pCar->move();
    delete pCar;
    cout << "インスタンスの削除完了" << endl;
    return 0;
}