#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int num1, num2, cnt;
    int sss[] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> collection;
    while (1){
        cout << "正の値を入力" << endl;
        cin >> num1;
        if (num1==-1){
            break;
        }
        collection.push_back(num1);
    }
    num2 = collection.size();

    for (int i=0; i<10; i++){
        cnt = 0; //フラグのリセット
        cout << "１の位が" << sss[i] << ":";
        for (int j=0; j<num2; j++){
            if (collection[j]%10 == i){
                cout << collection[j] << " ";
                cnt ++;
            }
        }
        if (cnt==0){
            cout << "なし";
        }
        cout  << endl;
    }
}