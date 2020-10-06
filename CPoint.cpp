#include "CPoint.h"
#include "stdio.h"

void CPoint::affichePoint() const //Cette fonction est présente pour l'exemple, elle ne devrait pas rester là
{
	printf("x :%d\n", getnX());
	printf("y :%d\n", getnY());
}


CPoint::CPoint()
{
	this->m_nX = 0;
	this->m_nY = 0;

	this->m_strChaine = "pivot";
}


CPoint::CPoint(int m_nX, int m_nY, string m_strType)
{
	this->m_nX = m_nX; //Global = local
	this->m_nY = m_nY;

	this->m_strChaine = m_strType;
}


int CPoint::getnX() const
{
	return m_nX;
}


int CPoint::getnY() const
{
	return m_nY;
}


void CPoint::setnX(int n_Val)
{
	m_nX = n_Val;
}


void CPoint::setnY(int n_Val)
{
	m_nY = n_Val;
}