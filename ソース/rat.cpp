#include "../ヘッダ/rat.h"
#include <iostream>

using namespace std;

int CRat::m_count = 0;

CRat::CRat() : m_id(0){
    m_id = m_count;
    m_count++;
}

CRat::~CRat() {
    cout << "ID:" << m_id << "を消去しました" << endl;
    m_count--;
}

void CRat::showNUM(){
    cout << "現在いるratの数は" << m_count << "です" << endl;
}

void CRat::squeak(){
    cout << m_id << ":" << "テスト" << endl;
}