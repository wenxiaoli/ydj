#ifndef C_OBJERVER_H
#define C_OBJERVER_H

#include "Nty.h"
#include <map>


// �۲���ģʽ��Ĺ۲���
class CObServer
{
public:
	CObServer();
	virtual ~CObServer();

	// ע�ᵽfacada
	bool regist();

	// ��ע��
	void unregist();

protected:
	// ����dispatcher�Լ�����Ȥ��֪ͨ
	std::map<ENty, EObserverPrio> listInterestNty();


};

#endif
