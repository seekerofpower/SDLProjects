// Ejercicio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void promedio()
{
	int valores[10] = { 2,8,7,14,21,35,50,67,3,95 };
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		total += valores[i];
	}

	double promedio = total / 10;

	std::cout << "Promedio:" << promedio << std::endl;
}

void volteado()
{
	int valores[10] = { 2,8,7,14,21,35,50,67,3,95 };
	for(int i = 9; i >= 0; i--)
	{
		std::cout<< valores[i] << std::endl;
	}
	
}

void buscarMaximo()
{
	int max = -1;
	
	int valores[10] = { 2,8,7,14,21,35,50,67,3,95 };
	int min = valores[0];
	for (int i = 0; i < 10; i++)
	{
		if (valores[i] > max)
		{
			max = valores[i];
		}
		if (valores[i]<min)
		{
			min = valores[i];
		}
	}

	std::cout << "Maximo:" << max << std::endl << "minimo:" << min<<std::endl;

}
void withWhile()
{
	//std::cout << "Hello World!... Benjamin\n";
	int valores[10] = { 2,8,7,14,21,35,50,67,3,95 };
	int find = 67;
	bool bOK = false;
	int i = 0;
	while (i < 10)
	{
		if (valores[i] == find)
		{
			bOK = true;
			break;
		}
		i++;
	}
	if (bOK)
	{
		std::cout << "La encontre";
	}
	else
	{
		std::cout << "no la encontre";
	}

}
int main()
{
	withWhile();
	buscarMaximo();
	promedio();
	volteado();
}
void withFor()
{
	std::cout << "Hello World!... Benjamin\n";
	int valores[10] = { 2,8,7,14,21,35,50,67,3,95 };
	int find = 67;
	bool bOK = false;
	for (int i = 0; 1 < 10; i++)
	{
		if (valores[i] == find)
		{
			bOK = true;
			break;
		}

	}
	if (bOK)
	{
		std::cout << "La encontré";
	}
	else
	{
		std::cout << "no la encontré";
	}
}
