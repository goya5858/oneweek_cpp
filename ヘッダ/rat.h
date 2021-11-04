#ifndef _RAT_H_
#define _RAT_H_

class CRat {
public:
	//  �R���X�g���N�^
	CRat();
	//  �f�X�g���N�^
	~CRat();
	//  �l�Y�~�̐��̏o��
	static void showNUM();
	//  �l�Y�~����
	void squeak();
private:
	//  �l�Y�~�̔ԍ�
	int m_id;
	//  �l�Y�~�̐�
	static int m_count;
};

#endif /* _RAT_H_ */