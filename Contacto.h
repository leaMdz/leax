#ifndef Contacto_h
#define Contacto_h

#include <vector>
#include <string>
#include "VideoConferencia.h"


class PruebaConexion;
class Ubicacion;
class VideoConferencia;

class Contacto {
	
	
private:
	int id;
	std::string nom;
	std::string tel;
	
	
	Ubicacion *AgreContactoUbic;
	
	/**
	* @element-type VideoConferencia
	*/
	std::vector< PruebaConexion* > PruebaConexionAssoc;
	

 public:

    Contacto(int id, std::string nom, std::string tel, Ubicacion* oUbic);

    void editarDatos(std::string nom, std::string tel);
	
	void editarUbicacion(Ubicacion* oUbic);

    std::string mostrarDatos();

    void mostrarHistorialVideoconf(std::vector<VideoConferencia*>& v);

	int verId(){return this->id;}
   
};

#endif // Contacto_h
