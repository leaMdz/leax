#ifndef VideoConferencia_h
#define VideoConferencia_h

#include <vector>

#include "Date.h"
#include "PruebaConexion.h"
#include "Contacto.h"

class PruebaConexion;
class Contacto;

class VideoConferencia {
	
private:
	
	int id;
	std::string titulo;
	std::string dir;
	std::string dir2;
	bool activa;
	
	Date *AgreVideoConfDate;
	
	
	
	/**
	* @element-type Contacto
	*/
	std::vector< PruebaConexion* > PruebaConexionAssoc;
	
	

 public:

    VideoConferencia(int id, std::string strF,std::string titulo, std::string dir, std::string dir2, std::vector<Contacto*>& vCont);

    void editarDatos(std::string titulo, std::string dir, std::string dir2);

    Date* mostrarFecha();

    std::string mostrarDatos();

    void crearPruebaConexion(std::vector<Contacto*>& v);

    void mostrarContactos(std::vector<Contacto*>& v);

	void editarPruebaConexion(int idCont,std::string strF, std::string detalle);
	
	bool estaActiva();
	
	void darDeBaja();



};

#endif // VideoConferencia_h
