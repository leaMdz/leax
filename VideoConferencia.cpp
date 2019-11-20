#include "VideoConferencia.h"




VideoConferencia::VideoConferencia(int id,std::string strF ,std::string titulo, std::string dir, std::string dir2, std::vector<Contacto*>& vCont)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B85 begin
{
	this->id = id;
	this->titulo = titulo;
	this->dir = dir;
	this->dir2 = dir2;
	this->activa = true;
	this->AgreVideoConfDate = new Date(strF);
	crearPruebaConexion(vCont);
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B85 end

void VideoConferencia::editarDatos(std::string titulo, std::string dir, std::string dir2)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B87 begin
{
	if(titulo != " ") this->titulo = titulo;
	if(dir != " ") this->dir = dir;
	if(dir2 != " ") this->dir2 = dir2;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B87 end

Date* VideoConferencia::mostrarFecha()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B92 begin
{
	return this->AgreVideoConfDate;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B92 end

std::string VideoConferencia::mostrarDatos()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BCA begin
{
	std::string salida = " ";
	salida += std::to_string(this->id) + " | " + this->titulo + " | "  + this->AgreVideoConfDate->verEnStr() + " | " + this->dir + " | " + this->dir2 ;
	return salida;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BCA end

void VideoConferencia::crearPruebaConexion(std::vector<Contacto*>& v)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BEF begin
{
	for(int i= 0; i<v.size(); i++){
		PruebaConexion* oPrueb = new PruebaConexion(" ",this->AgreVideoConfDate,v[i],this);
		this->PruebaConexionAssoc.push_back(oPrueb);
	}
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BEF end

void VideoConferencia::mostrarContactos(std::vector<Contacto*>& v)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C11 begin
{
	for(auto oPrueb : this->PruebaConexionAssoc){
		v.push_back(oPrueb->myContacto);
	}
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C11 end


void VideoConferencia::editarPruebaConexion(int idCont, std::string strF, std::string detalle){
	for(auto oPrueba : this->PruebaConexionAssoc){
		if(oPrueba->myContacto->verId() == idCont){
			oPrueba->editarDatos(strF, detalle);
			break;
		}
			
	}
}
bool VideoConferencia::estaActiva(){
	return this->activa;
}
void VideoConferencia::darDeBaja(){
	this->activa = false;
}
