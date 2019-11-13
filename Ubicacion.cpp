#include "Ubicacion.h"




Ubicacion::Ubicacion(int id, std::string nom, std::string tel, std::string tel2,std::string dom)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C15 begin
{
	this->id = id;
	this->nom = nom;
	this->tel = tel;
	this->tel2 = tel2;
	this->dom = dom;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C15 end

void Ubicacion::editarDatos(std::string nom, std::string tel, std::string tel2, std::string dom)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C17 begin
{
	if (nom != " ") this->nom = nom;
	if (tel != " ") this->tel = tel;
	if (tel2 != " ")this->tel2 = tel2;
	if (dom != " ") this->dom = dom;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C17 end

std::string Ubicacion::mostrarDatos()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C19 begin
{
	std::string salida = " ";
	salida += this->nom + " | " + this->tel + " | " + this->tel2 + " | " + this->dom;
	return salida;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000C19 end
