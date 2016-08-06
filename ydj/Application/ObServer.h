#ifndef C_OBJERVER_H
#define C_OBJERVER_H

// 观察者模式里的观察者
class CObServer
{
public:
	CObServer();
	virtual ~CObServer();

	std::vector<int>& listInterestNty();
};

#endif
