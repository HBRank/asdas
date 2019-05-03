#include<iostream>
#include"lul.h"

using namespace std;

class Asesoria public: ActividadComplementaria{
 	string materias[5];
	string maestros[5];
	string horario;
	public:
	void setMaterias(string ma){materias[]=ma;}
	string getMaterias(){return materias[];}
	void setMaestros(string mae){mastreos[]=mae;}
	string getMaestros(){return maestros;}
	void setHorario(string h){horario=h;}
	string getHorario(){return horario;}
	
};
class Asesor public: Profesor public:Persona{
	string materiaAsesoria;
	int horario;
	public:
	void setMateriaAsesoria(string mat){materiaAsesoria=mat;}
	string getMateriaAsesoria(){return materiaAsesoria;}
	void setHorario(int ho){horaio=ho;}
	int getHorario(){return horario;}

};
class Alumno public:Persona
{
	int noDeControl;
	string carrera;
	int semestre;
	string grupo;
	int nss;
	public:
	void setNoDeControl(int no){noDeControl=no;}
	int getNoDeControl(){return noDeControl;}
	void setCarrera(string ca){carrera=ca;}
	string getCarrera(){return carrera;}
	void setSemestre(int sem){semestre=sem;}
	int getSemestre(){return semestre;}
};
