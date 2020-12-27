// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace System;
using namespace std;

//nombrede la matriz[filas]
//delaramos variable matriz de tipo entero;
int matriz[12][8] = {
	{ 1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,0,0,0,0,1 },
	{ 1,0,2,2,2,2,0,1 },
	{ 1,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1 },
};



void salidadatos()
{

	for (int filas = 0; filas < 12; filas++)
	{
		for (int columnas = 0; columnas < 8; columnas++)
			cout << matriz[filas][columnas];
		cout << endl;
	}

}


void dibujarmatriz()
{
	for (int filas = 0; filas < 8; filas++)
	{
		
		for (int columnas = 0; columnas < 8; columnas++)
		{
			Console::SetCursorPosition(columnas, filas);// esta linea hace que los colores se superpongan a los numeros, ademas ya no es necesario el cout endl, de abajo.
			if (matriz[filas][columnas] == 1)
				Console::BackgroundColor = ConsoleColor::Cyan;
			cout << " ";
			if (matriz[filas][columnas] == 2)
				Console::BackgroundColor = ConsoleColor::Red;
			cout << " ";
			if (matriz[filas][columnas] == 0)
				Console::BackgroundColor = ConsoleColor::Gray;
			cout << " ";
		}
		cout << endl;
	}
}

int main()
{

	salidadatos();
	dibujarmatriz();
	_getch();


}