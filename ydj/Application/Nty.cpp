#include "Nty.h"


CNty::CNty(ENty id)
	: m_id(id)
{
}

CNty::~CNty()
{
}

ENty CNty::getID()
{
	return m_id;
}

//------------------------

CNtyStart::CNtyStart():
	CNty(ENty_start)
{

}

CNtyStart::~CNtyStart()
{

}
