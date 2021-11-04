#include "../ヘッダ/foo.h"
#include "../ヘッダ/bar.h"
#include <iostream>
 
using namespace std;
 
int main(void){
    Foo* pFoo = new Foo();
    Bar* pBar = new Bar();

    pBar->func1(pFoo);
    pBar->func2();
    pFoo->hoge();
    pFoo->fuga(pBar);

    delete pFoo;
    delete pBar;
    return 0;
}