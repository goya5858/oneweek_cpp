#include <iostream>
#include <string>

using namespace std;

int main(void){
    int h, w;
    cin >> h >> w;
    int matrix[h][w];

    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            cin >> matrix[i][j];
        }
    }
    
    for (int i_1=0; i_1<h; i_1++){
        for (int i_2=i_1; i_2<h; i_2++){
            for (int j_1=0; j_1<w; j_1++){
                for (int j_2=j_1; j_2<w; j_2++){
                    if(matrix[i_1][j_1]+matrix[i_2][j_2] > matrix[i_2][j_1]+matrix[i_1][j_2]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}