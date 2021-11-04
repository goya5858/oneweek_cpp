#ifndef _B_H_
#define _B_H_

class A; //とりあえずクラスの宣言だけする

class B{
    private:
        A * m_pA;
    public:
        B(A* pA); //コンストラクタ
        virtual ~B();
        void hoge();
};

#endif