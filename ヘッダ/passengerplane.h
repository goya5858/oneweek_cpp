#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "./Airplane.h"

using namespace std;

class PassengerPlane : public Airplane{
    public:
        PassengerPlane(){
            m_type="旅客機";
        };
        void fly(){
            cout << "乗客を乗せて目的地まで飛行します。" << endl;
        }
        void carryPassengers(){
            cout << "乗客を目的地まで運びます" << endl;
        }
};

#endif