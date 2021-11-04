#include "../ヘッダ/foo.h"
#include "../ヘッダ/bar.h"
#include <iostream>
 
using namespace std;
 
void Foo::hoge(){
    cout << "Foo::hoge()" << endl;
}
void Foo::fuga(Bar* pBar){
    cout << "Foo::fuga()" << endl;
    pBar->func2();
}