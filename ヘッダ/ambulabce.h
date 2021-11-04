#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "./ccar.h"

class CAmbulance : public CCar{
    public:
        CAmbulance();
        virtual ~CAmbulance();
        void savePeople();
    private:
        int m_number;
};

#endif