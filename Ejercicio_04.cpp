/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una ecuación cuadrática
utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para calcular la raíz cuadrada. Solicita
al usuario los coeficientes de la ecuación (a, b, c) y muestra las raíces obtenidas. Considera los casos en los que
las raíces son reales o complejas.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a,b,c, resultado1, resultado2;
	cout<<"---Calcular Raices Cuadraticas---"<<endl<<endl;
	cout<<"ax^2 + bx + c = 0"<<endl<<endl;
	cout<<"Ingrese el primer coeficiente(a): ";
	cin>>a;
	cout<<"Ingrese el segundo coeficiente(b): ";
	cin>>b;
	cout<<"Ingrese el tercer coeficiente(c): ";
	cin>>c;
	
	resultado1 = ((-b + (sqrt((pow(b,2)))-(4*(a)*(c))))/2*a);
	resultado2 = ((-b - (sqrt((pow(b,2)))-(4*(a)*(c))))/2*a);
	
	cout<<"El primer resultado (+) es de "<<resultado1<<endl;
	cout<<"El segundo resultado (-) es de "<<resultado2<<endl;
	
	return 0;
}
