#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;
class Atleta
{
private:
	int Velocidad;
	int Fuerza;
	int Energia;
	string Nombre = "";
	
public:
	Atleta() {
		Velocidad = 10;
		Energia = 10;
		Fuerza = 10;
		Nombre = "Chanchito";
	
	}
	Atleta(int V, int F, int E, string N)
	{
		V = Velocidad;
		F = Fuerza;
		E = Energia;
		N = Nombre;
	}
	void IncrementarVel(int Velocidad, int Energia)
	{
		Velocidad + 20;
		Energia + 15;
	}
};



int main ()
{
	string nombre;
	setlocale(LC_ALL, "es_MX.UTF-8");
	cout << "Bienvenido atleta.\n";
	cout << "Ingresa tu nombre en esta hoja: \n";
	cin >> nombre;
	cout << "quiubo " << nombre << ".\n";
	
	string NombreAux = "Rapidin";
	Atleta Random;
	Atleta Rapidin(100, 150, 200, NombreAux);

	cout << Rapidin.Velocidad<<endl;
	cout << Rapidin.Velocidad << endl;
	cout << Rapidin.Energia << endl;
	cout << Rapidin.Fuerza << endl;
}
