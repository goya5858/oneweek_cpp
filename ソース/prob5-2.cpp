#include <iostream>
#include "../ヘッダ/prob5-2.h"

using namespace std;

int Object::m_object = 0;

Object::Object(){
    m_object ++;    
}

Object::~Object(){
    m_object --;
}

int Object::getObjectNum(){
    return m_object;
}