#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
    string word="";
    vector<string> words, maxwords, minwords;
    int num_max=0, num_min=256;
    while (true)
    {
        cout << "文字列を入力:" ;
        getline(cin, word);
        if (word==""){
            cout<<"入力完了"<<endl;
            break;
        }
        words.push_back(word);
        if (num_max<word.size()){
            num_max = word.size();
        }
        if (num_min>word.size()){
            num_min = word.size();
        }
    }
    
    vector<string>::iterator itr;
    for (itr=words.begin(); itr!=words.end(); itr++){
        if (itr->size()==num_max){
            maxwords.push_back(*itr);
        }
        if (itr->size()==num_min){
            minwords.push_back(*itr);
        }
    }

    vector<string>::iterator max_itr, min_itr;
    cout << "最長の単語 ";
    for (max_itr=maxwords.begin(); max_itr!=maxwords.end(); max_itr++){
        cout << *max_itr << " ";
    }
    cout << endl;

    cout << "最短の単語 ";
    for (min_itr=minwords.begin(); min_itr!=minwords.end(); min_itr++){
        cout << *min_itr << " ";
    }
    cout << endl;
}