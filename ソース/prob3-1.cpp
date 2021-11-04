#include <iostream>
#include <string>
#include "../ヘッダ/prob3-1.h"

void CData::init(){
    number = 0;
    comment = "";
}

void CData::setter(int num, string com){
    number = num;
    comment = com;
}

int, string CData::getter(){
    return number, comment;
}