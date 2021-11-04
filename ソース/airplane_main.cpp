#include <iostream>
#include "../ヘッダ/Airplane.h"
#include "../ヘッダ/fighteraircraft.h"
#include "../ヘッダ/passengerplane.h"

using namespace std;

int main(void){
    FighterAircraft * fighter = new FighterAircraft();
    PassengerPlane * airlinear = new PassengerPlane();

    fighter->fly();
    fighter->fight();

    airlinear->fly();
    airlinear->carryPassengers();

    delete fighter;
    delete airlinear;
}