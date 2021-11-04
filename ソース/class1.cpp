#include <iostream>
#include "../ヘッダ/sample1.h"

using namespace std;

int main(void){
    CSample obj;
    int num;

    cout << "整数を入力してください" << endl;
    cin >> num;

    obj.set(num);
    cout << obj.get() << endl;
}