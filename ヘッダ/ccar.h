#ifndef _CAR_H_
#define _CAR_H_

class CCar{
    public:
        CCar(); //コンストラクタ
        virtual ~CCar(); //デストラクタ
        void move();
        void supply(int);
    private:
        int m_fuel;
        int m_migration;
};
#endif