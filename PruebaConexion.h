#ifndef PruebaConexion_h
#define PruebaConexion_h

#include "Contacto.h"
#include "VideoConferencia.h"
#include "Date.h"

class Date;
class Contacto;
class VideoConferencia;

class PruebaConexion {


 private:
    std::string detalle;

    Date *AgrePruebaDate;

 public:
	 PruebaConexion(std::string detalle, Date* AgrePruebaDate, Contacto* oCont, VideoConferencia* oVid);
	 
	 std::string verDetalle() const ;
	 Date* verFecha();
	 void editarDatos(std::string detalle, std::string strF);

    /**
     * @element-type VideoConferencia
     */
    VideoConferencia* myVideoConferencia;

    /**
     * @element-type Contacto
     */
    Contacto* myContacto;
};

#endif // PruebaConexion_h
