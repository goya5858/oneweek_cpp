#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector{
    private:
        double m_x;
        double m_y;
    public:
        Vector();
        Vector(double, double);
        void set(double, double);
        double getX();
        double getY();
};

#endif