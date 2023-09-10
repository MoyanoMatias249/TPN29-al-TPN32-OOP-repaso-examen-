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
};

int main(){
	Circulo circulo(6, 12);
	
	cout<<"Radio: "<<circulo.GetRadio()<<" CM"<<endl;
	cout<<"Diametro: "<<circulo.GetDiametro()<<" CM"<<endl<<endl;
	
	return 0;
}
