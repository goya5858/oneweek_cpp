#include "../ヘッダ/ccar.h"
#include "../ヘッダ/ambulabce.h"

int main(void){
    CCar c;
    c.supply(10);
    c.move();
    c.move();

    CAmbulance a;
    a.supply(10);
    a.move();
    a.savePeople();
}