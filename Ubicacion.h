#ifndef Ubicacion_h
#define Ubicacion_h
#include <string>


class Ubicacion {
	
private:
	int id;
	std::string nom;
	std::string tel;
	std::string tel2;
	std::string dom;
	

 public:

    Ubicacion(int id, std::string nom, std::string tel, std::string tel2,std::string dom);

    void editarDatos(std::string nom, std::string tel, std::string tel2, std::string dom);

    std::string mostrarDatos();



};

#endif // Ubicacion_h
