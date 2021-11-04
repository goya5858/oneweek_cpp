#include "NewString.h"
 
//  コンストラクタ
NewString::NewString()
{
    m_value = "";
}
//  値を代入するコンストラクタ①（文字列から）
NewString::NewString(string value)
{
    m_value = value;
}
//  値を代入するコンストラクタ②（他のクラスから)
NewString::NewString(NewString& value)
{
    m_value = value.getValue();
}
//  値を代入
NewString& NewString::operator= (NewString& n)
{
    m_value = n.getValue();
    return *this;
}

bool NewString::operator==(NewString& n){
    if (stricmp(m_value.c_str(), n.getValue.c_str()) == 0){
        return true;
    }
    return false;
}

//  stringで値を取得
string NewString::getValue()
{
    return m_value;
}