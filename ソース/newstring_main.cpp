#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
//#include "../ヘッダ/NewString.h"

using namespace std;

int main(void){
    string A("AAAAA");
    transform(A.begin(), A.end(), A.begin(), tolower);
    cout << A << endl;
}