#include "../ヘッダ/sample2.h"
#include <iostream>

using namespace std;

int main(void){
    Sample s;
    s.a = 1;
    //s.b = 2; //private 変数なので外部からアクセスできない
    s.func1();
    //s.func2(); //privateメソッドなので外部からアクセスできない
}