#ifndef _PROB5_2_H_
#define _PROB5_2_H_

class Object{
    private:
        static int m_object;
    public:
        Object();
        virtual ~Object();
        static int getObjectNum();
};

#endif