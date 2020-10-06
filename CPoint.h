#pragma once

#ifndef CPOINT_H
#define CPOINT_H

#include <string>

using namespace std;

class CPoint
{
private:
	//Données membres
	int m_nX;
	int m_nY;

	string m_strChaine;


public:
	//Fonctions membres
	void affichePoint() const;

	CPoint(); //Constructeur sans paramètres

	CPoint(int n_valX, int n_valY, string m_strType); //Constructeur avec paramètres


	//GET (Assesseur)
	int getnX() const;
	int getnY() const;

	//SET (Mutateur)
	void setnX(int n_Val);
	void setnY(int n_Val);
};

#endif