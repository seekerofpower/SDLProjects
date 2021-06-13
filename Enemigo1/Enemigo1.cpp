// Enemigo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

class Enemigo
{
	public:
		Enemigo()
		{	
			vida = 3;
			posx = 0;
			posy = 0;
		}
		Enemigo(int v)
		{
			vida = v;
			posx = 0;
			posy = 0;
		}
		void mover()
		{}
		void atacar()
		{}
		void dano()
		{}

	private:	
		int posx;
		int posy;
		int vida;
};

class figura
{
	private:
		int color;
		
	public:
		figura()
		{}
		int area()
		{}
		int perimetro()
		{}

};

#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}
