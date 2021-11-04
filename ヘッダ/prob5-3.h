#ifndef _PROB5_3_H_
#define _PROB5_3_H_

class Counter{
    private:
        int m_count;
        static int total;
    public:
        Counter();
        void reset();
        void count();
        int getCount();
        static int getTotalCount();
};

#endif