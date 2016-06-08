#include "Farma.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;



int main(int argc, char const **argv)
{

	
	srand(time(NULL));
	Farma *farma;
	Farmer *farmer;
	
	long long goal_money;
	
	
	cout<<"Podaj Liczbe kur"<<endl;
	cin>> farma.liczba_kur;
	cout<<"Podaj, ile pieniedzy chcesz zarobic"<<endl;
	cin>> goal_money;

	
	int turn_limit=500;
	
	

	for(int i=0; i<turn_limit; i++)
	{
		if(farmer.money >= goal_money)
		{
		cout<<"gratulacje, wygrales";
		return 0;
		}
		for(int j=0; j<farma.liczba_kur; j++)	//kury znosza jajka z ktorych moga sie wykluc inne kury 
		{
			int p= 1 + rand() % 100;
			if(p<21)
			farma.liczba_jajek++;
			else if (p>20 && p<25)
			farma.liczba_kur++;
		}
		if(farma.liczba_jajek>=50)	//sprzedaz jajek i kupno krowy	
		{
		farma.liczba_jajek-=50;
		farma.liczba_krow++;
		}

		for(int y=0; y<farma.liczba_krow; y++)	//krowy dają mleko za ktore farmer otrzymuje pieniadze
		{
		farmer.money+=10;
		}
		usleep(1000000);
	}
		
		
}
