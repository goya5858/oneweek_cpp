#include <iostream>
#include "../ヘッダ/ccar.h"

using namespace std;

CCar::CCar(): m_fuel(0), m_migration(0) //メンバ変数に0を設定
{
    cout << "オブジェクト生成" << endl;
}

CCar::~CCar(){
    cout << "オブジェクト破棄" << endl;
}

void CCar::move(){
    if (m_fuel > 0){
        m_migration++;
        m_fuel--;
    }
    cout << "移動距離:" << m_migration << endl;
    cout << "燃料:" << m_fuel << endl; 
}

void CCar::supply(int fuel){
    m_fuel += fuel;
    cout << "燃料:" << m_fuel << endl;
}