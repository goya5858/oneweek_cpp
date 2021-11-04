#include "../ヘッダ/ambulabce.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119){
    cout << "CAmbulanceオブジェクトの作成" << endl;
}

CAmbulance::~CAmbulance(){
    cout << "CAmbulanceオブジェクトの破棄" << endl;
}

void CAmbulance::savePeople(){
    cout << "救命活動" << endl << "呼び出しは" << m_number << endl;
}