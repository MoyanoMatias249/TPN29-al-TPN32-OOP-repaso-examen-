#include <bits/stdc++.h>
using namespace std;

class Circulo{
	private:
		float Radio;
		float Diametro;
	public:
		Circulo(float radio, float diametro){
			SetRadio(radio);
			SetDiametro(diametro);
		}
		
		void SetRadio(float radio){
			Radio = radio;
		}
		void SetDiametro(float diametro){
			Diametro = diametro;
		}
		
		float GetRadio(){
			return Radio;
		}
		float GetDiametro(){
			return Diametro;
		}
		
		float CalcularSuperficieCirculo(){
			float Superficie = 3.14 * (Radio * Radio);
			return Superficie;
		}
		
		float CacularPerimetroCirculo (){
			float Perimetro = 2 * 3.14 * Radio;
			return Perimetro;
		}
};

int main(){
	Circulo circulo(5, 10);
	
	cout<<"Radio: "<<circulo.GetRadio()<<" CM"<<endl;
	cout<<"Diametro: "<<circulo.GetDiametro()<<" CM"<<endl<<endl;
	
	cout<<"Superficie del circulo: "<<circulo.CalcularSuperficieCirculo()<<" CM^2"<<endl;
	cout<<"Perimetro del circulo: "<<circulo.CacularPerimetroCirculo()<<" CM"<<endl;
	
	return 0;
}
