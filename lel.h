#include<iostream>

using namespace std;

class ActividadComplementaria{
	int clave;
	string nombre;
	public:
	void setClave(int c){clave=c;}
	int getClave(){return clave;}
	void setNombre(string nom){nombre=nom;}
	string getClave(){return nombre;}
};	
class Profesor{
	int claveDeTrabajador;
	string materia;
	public:
	void setClaveDeTrabajador(int cl){clave=cl;}
	int getClaveDeTrabajador(){return clave;}
	void setMateria(string mat){materia=mat;}
	string getMateria(){return materia;}

};
class Perosna{
	string edad;
	int d,m,a;
	public:
	void setFecha(int _d,_m,_a){d=_d;m=_m;a=_a;}
	string getFecha(){return d<<","<<m<<","<<a}
	void setNombre(string no){nombre=no;}
	string getNombre(){return nombre;}
	void setSexo(string s){sexo=s;}
	string getSexo(){return sexo;}
	int calcEdad(){}

};
