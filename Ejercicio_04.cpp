#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    double discriminante,resul1,resul2;
    double resulReal, resulImag;

    cout<<"---Calcular Raíces Cuadráticas---"<<endl<<endl;
    cout<<"ax^2 + bx + c = 0"<<endl<<endl;
    cout<<"Ingrese el primer coeficiente (a): ";
    cin>>a;
    cout<<"Ingrese el segundo coeficiente (b): ";
    cin>>b;
    cout<<"Ingrese el tercer coeficiente (c): ";
    cin>>c;
    cout<<endl;

    if(a == 0){
        cout<<"No es una ecuación cuadrática ('a' no puede ser cero)"<<endl;
        return 1;
    }
    
    discriminante=b*b-4*a*c;
    
    if (discriminante > 0){
        resul1=(-b + sqrt(discriminante)) / (2*a);
        resul2=(-b - sqrt(discriminante)) / (2*a);
        cout<<"Resultado con raices reales y distintas:"<<endl;
        cout<<"Primer resultado(+): " << resul1<<endl;
        cout<<"Segundo resultado(-): " << resul2<<endl;
        
    }else if(discriminante == 0){
        resul1= -b / (2*a);
        cout<<"Resultado con raiz real doble:"<<endl;
        cout<<"Resultado es de: "<<resul1<<endl;
        
    }else{
        resulReal= -b / (2*a);
        resulImag= sqrt(-discriminante) / (2*a);
        cout << "Resultado con raices complejas:" << endl;
        cout << "Primer resultado: "<<resulReal<<" + "<<resulImag<<"i"<<endl;
        cout << "Segundo resultado: "<<resulReal<<" - "<<resulImag<<"i"<<endl;
    }
    
    return 0;
}
