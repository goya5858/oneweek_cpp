#include "../ヘッダ/rat.h"
#include <iostream>

using namespace std;

int main() {
	CRat *r1, *r2, *r3;
	r1 = new CRat();    //  ��C�ڂ̃l�Y�~����
	r1->squeak();
	CRat::showNUM();    //  �l�Y�~�̐���\��
	r2 = new CRat();    //  ��C�ڂ̃l�Y�~����
	r3 = new CRat();    //  �O�C�ڂ̃l�Y�~����
	r2->squeak();
	r3->squeak();
	delete r1;          //  ��C�ڂ̃l�Y�~����
	delete r2;          //  ��C�ڂ̃l�Y�~����
	CRat::showNUM();    //  �l�Y�~�̐���\��
	delete r3;          //  �O�C�ڂ̃l�Y�~����
	CRat::showNUM();    //  �l�Y�~�̐���\��
	return 0;
}