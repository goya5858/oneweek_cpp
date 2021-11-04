#ifndef _A_H_
#define _A_H_

class B; //とりあえずクラスの宣言だけする

class A{
    private:
        B * m_pB;
    public:
        A(); //コンストラクタ
        virtual ~A();
        void foo();
        void bar();
};

#endif