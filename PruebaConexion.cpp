#include "PruebaConexion.h"


PruebaConexion::PruebaConexion(std::string detalle, Date* AgrePruebaDate, Contacto* oCont, VideoConferencia* oVid){
	this->AgrePruebaDate = AgrePruebaDate;
	this->detalle = detalle;
	this->myContacto = oCont;
	this->myVideoConferencia = oVid;
}


std::string PruebaConexion::verDetalle() const 
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BF8 begin
{
	return this->detalle;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BF8 end
Date* PruebaConexion::verFecha()
{
	return this->AgrePruebaDate;
}
void PruebaConexion::editarDatos(std::string detalle, std::string strF)
{
	this->detalle = detalle;
	this->AgrePruebaDate = new Date(strF);
}
