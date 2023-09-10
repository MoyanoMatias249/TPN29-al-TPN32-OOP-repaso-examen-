#include <bits/stdc++.h>
using namespace std;

class Estudiante{
	private:
		string Nombre;
		int Edad;
		int Calificacion;
	public:
		Estudiante(string nombre, int edad, int calificacion){
			SetNombre(nombre);
			SetEdad(edad);
			SetCalificacion(calificacion);
		}
		
		void SetNombre(string nombre){
			Nombre = nombre;
		}
		void SetEdad(int edad){
			Edad = edad;
		}
		void SetCalificacion(float calificacion){
			Calificacion = calificacion;
		}
		
		string GetNombre(){
			return Nombre;
		}
		int GetEdad(){
			return Edad;
		}
		int GetCalificacion(){
			return Calificacion;
		}
};

int main(){
	Estudiante estudiante("Matias", 16, 7);
	
	cout<<"Nombre: "<<estudiante.GetNombre()<<endl;
	cout<<"Edad: "<<estudiante.GetEdad()<<" anios"<<endl;
	cout<<"Calificacion: "<<estudiante.GetCalificacion()<<endl; 
	
	return 0;
}
