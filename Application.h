#ifndef APPLICATION_H
#define APPLICATION_H
#include "back/h_GestorVideoConferencias.h"

#include <wx/app.h>

class h_GestorVideoconferencias;


class Application : public wxApp {
public:
	virtual bool OnInit();
	h_GestorVideoConferencias* obtenerInstancia();
};

static h_GestorVideoConferencias* oGestor;

#endif
