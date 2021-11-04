#include <iostream>
#include "../ヘッダ/a.h"
#include "../ヘッダ/b.h"

using namespace std;

A::A(){
    m_pB = new B(this); //this は　今作られている自分自身のインスタンスのこと
}
A::~A(){
    delete m_pB;
}

void A::foo() {
	cout << "foo" << endl;
}
void A::bar() {
	m_pB->hoge();
}