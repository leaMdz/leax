#ifndef Agenda_h
#define Agenda_h

#include <vector>
#include "VideoConferencia.h"
#include "Contacto.h"
#include "Ubicacion.h"


class VideoConferencia;
class Contacto;
class Ubicacion;

class Agenda {
	
	
private:
	
	/**
	* @element-type VideoConferencia
	*/
	std::vector< VideoConferencia* > AssocAgendaVideoConf;
	
	/**
	* @element-type Contacto
	*/
	std::vector< Contacto* > AssocAgendaContacto;
	
	/**
	* @element-type Ubicacion
	*/
	std::vector< Ubicacion* > AssocAgendaUbicacion;
	
	template <class T> void buscarVideoConferencia(std::vector<T>& v,std::string parametro);
	template <class T> void buscarContacto(std::vector<T>& v,std::string parametro);
	template <class T> void buscarUbicacion(std::vector<T>& v,std::string parametro);

 public:

    Agenda();

    void crearVideoconferencia(std::string strF,std::string titulo, std::string dir, std::string dir2, std::vector<Contacto*> vCont);

    void editarVideoconferencia(int id, std::string titulo, std::string dir, std::string dir2);

    void darDeBajaVideoconferencia(int id);

    void crearContacto(std::string nom, std::string tel, Ubicacion* oUbic);

    void editarContacto(int id , std::string nom, std::string tel);

    void eliminarContacto(int id);

    void crearUbicacion(std::string nom, std::string tel, std::string tel2, std::string dom);

    void eliminarUbicacion(int id);

    void mostrarVideoconfActivas(std::vector<VideoConferencia*>& v);

    void mostrarVideoconfCanceladas(std::vector<VideoConferencia*>& v);
	
	std::string mostrarDatosContactos();
	
	template<class T>
	void buscar(std::vector<T>& v, std::string parametro)
		// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B83 begin
	{
		if (typeid(T) == typeid(VideoConferencia*) ) buscarVideoConferencia(v,parametro);
		if (typeid(T) == typeid(Contacto*) ) buscarContacto(v,parametro);
		if (typeid(T) == typeid(Ubicacion*) ) buscarUbicacion(v,parametro);
	}
	// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000B83 end
	

};

#endif // Agenda_h
