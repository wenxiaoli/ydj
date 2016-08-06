#ifndef NOTIFY_DEFINE_H
#define NOTIFY_DEFINE_H

// 定义观察者模式的通知
enum ENty
{
	ENty_Begin,
	ENty_End,
	ENty_Count = ENty_End - ENty_Begin + 1
};


class CNty
{
protected:
	// 通知ID
	ENty m_id;
};




#endif