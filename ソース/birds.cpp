#include <iostream>
#include "../ヘッダ/bird.h"
#include "../ヘッダ/chicken.h"
#include "../ヘッダ/crow.h"

using namespace std;

int main(void){ 
    CBird *b1; //親クラスのポインタでインスタンスの作成
    CChicken *b2; //子クラスのポインタでインスタンスの作成
    b1 = new CCrow();
    b2 = new CChicken();
    b1->sing();
    b1->fly();
    b2->sing();
    b2->fly();
    delete b1, b2;

    //以下普通のオーバーライド
    //CCrow b1;
    //CChicken b2;
    //b1.sing();
    //b1.fly();
    //b2.sing();
    //b2.fly();
}