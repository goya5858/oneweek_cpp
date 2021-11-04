#include <iostream>
#include "../ヘッダ/a.h"
#include "../ヘッダ/b.h"

using namespace std;

B::B(A*pA){
    m_pA = pA;
}

B::~B(){
}

void B::hoge(){
    cout<<"bar"<<endl;
    m_pA->foo();
}