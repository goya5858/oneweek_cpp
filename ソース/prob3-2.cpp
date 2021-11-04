#include <iostream>
#include <string>
#include "../ヘッダ/prob3-2.h"

using namespace std;

void TwoStrings::setString1(string s1){
    m_string1 = s1;
}

void TwoStrings::setString2(string s2){
    m_string2 = s2;
}

string TwoStrings::getString1(){
    return m_string1;
}

string TwoStrings::getString2(){
    return m_string2;
}

string TwoStrings::getConnectedString(){
    return m_string1+m_string2;
}

int TwoStrings::getConnectedLength(){
    string new_str = m_string1+m_string2;
    return new_str.length();
}