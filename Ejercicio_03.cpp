#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	float cateto1, cateto2,hipotenusa;
	cout<<"---Calculo de la hipotenusa---"<<endl<<endl;
	cout<<"Ingrese el cateto 1: ";
	cin>>cateto1;
	cout<<"Ingrese el cateto 2: ";
	cin>>cateto2;
	hipotenusa=pow(cateto1,2) + pow(cateto2,2);
	hipotenusa=sqrt(hipotenusa);
	cout<<"La hipotenusa del triangulo es de "<<hipotenusa<<"."<<endl;
	return 0;
}
