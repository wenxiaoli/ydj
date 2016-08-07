#ifndef C_OBJERVER_H
#define C_OBJERVER_H

#include "Nty.h"
#include <map>


// 观察者模式里的观察者
class CObServer
{
public:
	CObServer();
	virtual ~CObServer();

	// 注册到facada
	bool regist();

	// 反注册
	void unregist();

protected:
	// 告诉dispatcher自己感兴趣的通知
	std::map<ENty, EObserverPrio> listInterestNty();


};

#endif
