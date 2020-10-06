#pragma once

#ifndef CPOINT_H
#define CPOINT_H

#include <string>

using namespace std;

class CPoint
{
private:
	//Donn�es membres
	int m_nX;
	int m_nY;

	string m_strChaine;


public:
	//Fonctions membres
	void affichePoint() const;

	CPoint(); //Constructeur sans param�tres

	CPoint(int n_valX, int n_valY, string m_strType); //Constructeur avec param�tres


	//GET (Assesseur)
	int getnX() const;
	int getnY() const;

	//SET (Mutateur)
	void setnX(int n_Val);
	void setnY(int n_Val);
};

#endif