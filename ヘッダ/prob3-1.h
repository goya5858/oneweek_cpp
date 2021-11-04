#ifndef _PROB3_1_H_
#define _PROB3_1_H_
#include <iostream>
#include <string>

using namespace std;

class CData{
    private:
        int number;
        string comment;
    public:
        void init();
        void setter(int, string);
        int, string getter();
}

#endif