#ifndef YDJ_NTY_H
#define YDJ_NTY_H

// ����۲���ģʽ��֪ͨ��ID
enum ENty
{
	ENty_begin,
	ENty_start,
	ENty_end,
	ENty_count = ENty_end - ENty_begin - 1
};

// �۲��߹۲���Ϣʱ�����ȼ�����
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

// ֪ͨ����
class CNty
{
public:
	CNty(ENty id);
	virtual ~CNty();

	// ȡ��֪ͨ��ID
	ENty getID();

protected:
	// ֪ͨID
	ENty m_id;
};


// ��������
class CNtyStart : CNty
{
public:
	CNtyStart();
	virtual ~CNtyStart();
};




#endif