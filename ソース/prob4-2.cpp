#include <iostream>
#include <string>
#include "../ヘッダ/prob4-2.h"

Hoge::Hoge(){
    std::cout << "コンストラクタ" << std::endl;
}

Hoge::~Hoge(){
    std::cout << "デストラクタ" << std::endl;
}

void Hoge::foo(){
    std::cout << "fooメソッド" << std::endl;
}