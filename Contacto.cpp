#include "Contacto.h"




Contacto::Contacto(int id, std::string nom, std::string tel, Ubicacion* oUbic)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C02 begin
{
	this->id = id;
	this->nom = nom;
	this->tel = tel;
	this->AgreContactoUbic = oUbic;
	
	this->PruebaConexionAssoc.clear();
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C02 end

void Contacto::editarDatos(std::string nom, std::string tel)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C04 begin
{
	this->nom = nom;
	this->tel = tel;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C04 end

std::string Contacto::mostrarDatos()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C0F begin
{
	std::string salida = " ";
	salida += std::to_string(this->id) + " | " +  this->nom + "|" + this->tel;
	return salida;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C0F end

void Contacto::mostrarHistorialVideoconf(std::vector<VideoConferencia*>& v)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C13 begin
{
	for(auto oPrueba : this->PruebaConexionAssoc){
		v.push_back(oPrueba->myVideoConferencia);
	}
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C13 end
void Contacto::editarUbicacion(Ubicacion* oUbic)
	// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B6F begin
{
	this->AgreContactoUbic = oUbic;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B6F end
