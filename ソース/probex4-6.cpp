#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void){
    list<int> LLL;
    int num;
    list<int>::iterator itr;

    while (true){
        cout << "正の整数を入力:";
        cin >> num;
        if (num<0){
            break;
        }
        if (LLL.size()==0){ //最初の場合、配列の確認は省略
            LLL.push_back(num);
        }
        else{
            for (itr=LLL.begin(); itr!=LLL.end();itr++){
                if (num <= *itr){
                    LLL.insert(itr, num); //最後まで行く途中に挿入できる場合
                    break;
                }
            }
            if (itr==LLL.end()){
                LLL.insert(itr, num); //最後までinsertされていなかった場合
            }
        }
        cout << "入力された数字:";
        for (itr=LLL.begin(); itr!=LLL.end(); itr++){
            cout << *itr << " ";
        }
        cout << endl;
    }
}