#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H
 
#include <iostream>
#include <string>
#include "./Airplane.h"

using namespace std;

class FighterAircraft : public Airplane{
    public:
        FighterAircraft(){
            m_type = "戦闘機";
        }
        void fly(){
            cout << "攻撃に出るために飛行" << endl;
        }
        void fight(){
            cout << "戦闘します" << endl;
        }
};

#endif