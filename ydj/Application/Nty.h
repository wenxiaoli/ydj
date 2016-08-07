#ifndef YDJ_NTY_H
#define YDJ_NTY_H

// 定义观察者模式的通知的ID
enum ENty
{
	ENty_begin,
	ENty_start,
	ENty_end,
	ENty_count = ENty_end - ENty_begin - 1
};

// 观察者观察消息时的优先级定义
enum EObserverPrio
{
	EOP_begin,
	EOP_highest,
	EOP_high,
	EOP_normal,
	EOP_Low,
	EOP_end,
	EOP_count = EOP_end - EOP_begin - 1
};

// 通知基类
class CNty
{
public:
	CNty(ENty id);
	virtual ~CNty();

	// 取得通知的ID
	ENty getID();

protected:
	// 通知ID
	ENty m_id;
};


// 程序启动
class CNtyStart : CNty
{
public:
	CNtyStart();
	virtual ~CNtyStart();
};




#endif