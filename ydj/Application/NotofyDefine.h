#ifndef NOTIFY_DEFINE_H
#define NOTIFY_DEFINE_H

// ����۲���ģʽ��֪ͨ
enum ENty
{
	ENty_Begin,
	ENty_End,
	ENty_Count = ENty_End - ENty_Begin + 1
};


class CNty
{
protected:
	// ֪ͨID
	ENty m_id;
};




#endif