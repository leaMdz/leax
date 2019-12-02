#include "htmlGen.h"
#include <sstream>

htmlGen::htmlGen() {
	
}

std::string htmlGen::dibujarHtmlHome(h_GestorVideoConferencias* oGestor){
    std::string salida = "";
    salida += " <!DOCTYPE html> \n";
    salida += " <html> \n";
    salida += "<head> \n";
    salida += "     <meta charset=&#34; utf-8 &#34; >\n";
	salida += "     <link rel=&#34;stylesheet&#34; href=&#34;styles.css&#34;> \n";
    salida += "     <title>EJEMPLO</title>\n";
    salida += "</head>\n";
    salida += "<body>\n";
    salida += "    <div id =&#34; div1 &#34;> \n";
    salida += "        <h1><title>GESTOR DE VIDEOCONFERENCIAS</title></h1>\n";
    salida += "    </div>\n";
    salida += "   <div id = &#34; dvi2 &#34;>\n";
    salida += "        <h1>GESTIONAR VIDEOCONFERENCIAS</h1>\n";
    salida += "           <h2>\n";
    salida += "             <button>CREAR</button>\n";
    salida += "            <button>MODIFICAR</button>\n";
    salida += "             <button>ELIMINAR</button>\n";
    salida += "         </h2>\n";
    salida += "    </div>\n";
    salida += "    <div id = &#34; div3 &#34; >\n";
    salida += "          <h1>\n";
    salida += "              <input type=&#34; radio &#34; id=&#34; check1 &#34;>\n";
    salida += "               <label>Mostrar todo</label>\n";
    salida += "          </h1>\n";
    salida += "          <h2>  \n";
    salida += "              <table>LISTA DE CONFERENCIAS</table>\n";
    std::stringstream ssListaConf(oGestor->verStrListaVidConfAct());
    for (std::string linea; std::getline(ssListaConf,linea,'\n');) {
         salida += "             <tr>\n";
        std::stringstream ssLinea(linea);
        for(std::string dato; std::getline(ssLinea,dato,',');) {
            salida += "              <th>"+dato+"</th>\n";
        }
         salida += "             </tr>\n";
    }
    salida += "          </h2>\n";
    salida += "   </div>\n";
    salida += "   <div id = &#34; div4 &#34; >\n";
    salida += "          <h1>\n";
    salida += "              <button>GUARDAR Y SALIR</button>\n";
    salida += "              <button>SALIR</button>\n";
    salida += "          </h1>\n";
    salida += "   </div>\n";
    salida += "</body>\n";
    salida += "<html> ";

    return salida;
}
