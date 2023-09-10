#include <bits/stdc++.h>
using namespace std;

class Persona{
	private:
		string Nombre;
		int Edad;
		float Altura;
	public:
		Persona(string nombre, int edad, float altura){
			SetNombre(nombre);
			SetEdad(edad);
			SetAltura(altura);
		}
		
		
		void SetNombre(string nombre){
			Nombre = nombre;
		}
		void SetEdad(int edad){
			Edad = edad;
		}
		void SetAltura(float altura){
			Altura = altura;
		}
		
		string GetNombre(){
			return Nombre;
		}
		int GetEdad(){
			return Edad;
		}
		float GetAltura(){
			return Altura;
		}
};

int main(){
	Persona persona("Matias", 16, 1.74);
	
	cout<<"Nombre: "<<persona.GetNombre()<<endl;
	cout<<"Edad: "<<persona.GetEdad()<<" anios"<<endl;
	cout<<"Altura: "<<persona.GetAltura()<<"M"<<endl; 
	
	return 0;
}
