#include "Application.h"
#include "v_Home.h"

IMPLEMENT_APP(Application)



bool Application::OnInit() {
	
	v_Home* myHome = new v_Home(NULL);
	myHome->Show();
	
	
	return true;
}

h_GestorVideoConferencias* Application::obtenerInstancia() {
	h_GestorVideoConferencias* salida;
	if(oGestor == NULL) {
		oGestor = new h_GestorVideoConferencias();
		salida = oGestor;
	} else salida = oGestor;
	return salida;

}
