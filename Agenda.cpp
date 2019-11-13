#include "Agenda.h"




Agenda::Agenda()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B38 begin
{
	this->AssocAgendaContacto.clear();
	this->AssocAgendaUbicacion.clear();
	this->AssocAgendaVideoConf.clear();
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B38 end

void Agenda::crearVideoconferencia(std::string strF, std::string titulo, std::string dir, std::string dir2, std::vector<Contacto*> vCont)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B43 begin
{
	this->AssocAgendaVideoConf.push_back(
		new VideoConferencia(this->AssocAgendaVideoConf.size(),strF,titulo,dir,dir2,vCont)						 
	);
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B43 end

void Agenda::editarVideoconferencia(int id, std::string titulo, std::string dir, std::string dir2)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B54 begin
{
	this->AssocAgendaVideoConf[id]->editarDatos(titulo,dir,dir2);
	
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B54 end

void Agenda::darDeBajaVideoconferencia(int id)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B56 begin
{
	this->AssocAgendaVideoConf[id]->darDeBaja();
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B56 end

void Agenda::crearContacto( std::string nom, std::string tel, Ubicacion* oUbic)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B58 begin
{
	
	this->AssocAgendaContacto.push_back(
			new Contacto(this->AssocAgendaContacto.size(),nom,tel,oUbic)
	);
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B58 end

void Agenda::editarContacto(int id , std::string nom, std::string tel)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B5A begin
{
	this->AssocAgendaContacto[id]->editarDatos(nom,tel);
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B5A end

void Agenda::eliminarContacto(int id)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B5C begin
{
	delete this->AssocAgendaContacto[id];
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B5C end

void Agenda::crearUbicacion( std::string nom, std::string tel, std::string tel2, std::string dom)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B6D begin
{
	this->AssocAgendaUbicacion.push_back(
		new Ubicacion(this->AssocAgendaUbicacion.size(),nom,tel,tel2,dom)
	);
	
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B6D end



void Agenda::eliminarUbicacion(int id)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B71 begin
{
	delete this->AssocAgendaUbicacion[id];
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B71 end

void Agenda::mostrarVideoconfActivas(std::vector<VideoConferencia*>& v)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B7F begin
{
	for(int i=0; i<this->AssocAgendaVideoConf.size(); i++){
		if(this->AssocAgendaVideoConf[i]->estaActiva())
			v.push_back(this->AssocAgendaVideoConf[i]);
	}
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B7F end

void Agenda::mostrarVideoconfCanceladas(std::vector<VideoConferencia*>& v)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B81 begin
{
	for(int i=0; i<this->AssocAgendaVideoConf.size(); i++){
		if(! this->AssocAgendaVideoConf[i]->estaActiva())
			v.push_back(this->AssocAgendaVideoConf[i]);
	}
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B81 end

template <class T>
void Agenda::buscarVideoConferencia(std::vector<T>& v,std::string parametro){
	for(auto oVidConf : this->AssocAgendaVideoConf){
		for(std::string datos = oVidConf->mostrarDatos(); !datos.empty() ;datos = datos.substr(datos.find_first_of(" | ")+1,datos.size())){
			std::string celda =  datos.substr(0,datos.find_first_of(" | "));
			if(celda == parametro){
				v.push_back(oVidConf);
				datos.clear();
			}
		}
	}
}

template <class T>
void Agenda::buscarContacto(std::vector<T>& v,std::string parametro){
	for(auto oCont : this->AssocAgendaContacto){
		for(std::string datos = oCont->mostrarDatos(); !datos.empty() ;datos = datos.substr(datos.find_first_of(" | ")+1,datos.size())){
			std::string celda =  datos.substr(0,datos.find_first_of(" | "));
			if(celda == parametro){
				v.push_back(oCont);
				datos.clear();
			}
		}
	}
}
template <class T>
void Agenda::buscarUbicacion(std::vector<T>& v,std::string parametro){
	for(auto oUbic : this->AssocAgendaUbicacion){
		for(std::string datos = oUbic->mostrarDatos(); !datos.empty() ;datos = datos.substr(datos.find_first_of(" | ")+1,datos.size())){
			std::string celda =  datos.substr(0,datos.find_first_of(" | "));
			if(celda== parametro){
				v.push_back(oUbic);
				datos.clear();
			}
		}
	}
}



std::string Agenda::mostrarDatosContactos(){
	std::string salida = " ";
	for(auto oCont : this->AssocAgendaContacto){
		salida += oCont->mostrarDatos() + "\n";
	}
	return salida;
}


template class buscarVideoConferencia<VideoConferencia*>;
template class buscarContacto<Contacto*>;
template class buscarUbicacion<Ubicacion*>;
