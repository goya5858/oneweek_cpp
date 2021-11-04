#include <iostream>
#include "../ヘッダ/prob5-3.h"

using namespace std;

int Counter::total = 0;
Counter::Counter():m_count(0){
}

int Counter::getCount(){
    return m_count; 
}

void Counter::count(){
    m_count++;
    total++;
}

void Counter::reset(){
    total-=m_count;
    m_count=0;
}

int Counter::getTotalCount(){
    return total;
}