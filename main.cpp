#include<iostream>
#include "clases/Agenda.h"
#include "clases/Contacto.h"
using namespace std;

void opcCrearVideoConf(Agenda* oAgenda);
void opcEditarVideoConf(Agenda* oAgenda);
void opcDarDeBajaVideoConf(Agenda* oAgenda);
void opcCrearCont(Agenda* oAgenda);
void opcEditarCont(Agenda* oAgenda);
void opcEliminarCont(Agenda* oAgenda);


void menu(Agenda* oAgenda){
	cout<<"INGRESE UNA OPCION:"<<endl;
	cout<<"1: CREAR VIDEOCONFERENCIA"<<endl;
	cout<<"2: EDITAR VIDEOCONFERENCIA"<<endl;
	cout<<"3: DAR DE BAJA VIDEOCONF"<<endl;
	cout<<"4: CREAR CONTACTO" <<endl;
	cout<<"5: EDITAR CONTACTO" <<endl;
	cout<<"6: ELIMINAR CONTACTO" <<endl;
	cout<<"-1: SALIR"<<endl;
	int opc= 10;
	while(opc > 0){
		cin>>opc;
		switch(opc){
		case 1: opcCrearVideoConf(oAgenda); break;
		case -1: break;
		}
		cout<<"INGRESE UNA OPCION:"<<endl;
		cout<<"1: CREAR VIDEOCONFERENCIA"<<endl;
		cout<<"2: EDITAR VIDEOCONFERENCIA"<<endl;
		cout<<"3: DAR DE BAJA VIDEOCONF"<<endl;
		cout<<"4: CREAR CONTACTO" <<endl;
		cout<<"5: EDITAR CONTACTO" <<endl;
		cout<<"6: ELIMINAR CONTACTO" <<endl;
		cout<<"-1: SALIR"<<endl;
		
	}
}

int main (int argc, char *argv[]) {
	Agenda* oAgenda = new Agenda();
	menu(oAgenda);
	
	return 0;
}

void opcCrearVideoConf(Agenda* oAgenda){
	cout<<"**************CREAR VIDEOCONFERENCIA**************************"<<endl;
	cout<<"				       INGRESA LOS DATOS 						"<<endl;
	std::string idCont;
	std::string strF,strTit,strDir,strDir2;
	cout<<"Fecha y Hora:"; cin>>strF;
	cout<<"Titulo:"; cin>>strTit;
	cout<<"dir:"; cin>>strDir;
	cout<<"dir2:"; cin>>strDir2;
	cout<<"				ELEGI LOS CONTACTOS QUE PARTICIPAN 				"<<endl;
	cout<<oAgenda->mostrarDatosContactos()<<endl;
	cout<<"idCont:"; cin>>idCont;
	std::vector<Contacto*> v; v.clear();
	oAgenda->buscar(v,idCont);
	oAgenda->crearVideoconferencia(strF,strTit,strDir,strDir2,v);
	cout<<"			VideoConferencia creada.....						"<<endl;
	cout<<"*******************************************************************"<<endl;
	
}
