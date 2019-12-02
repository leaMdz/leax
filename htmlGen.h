#ifndef HTMLGEN_H
#define HTMLGEN_H
#include <string>
#include "back/h_GestorVideoConferencias.h"

class htmlGen {
public:
	htmlGen();
	std::string dibujarHtmlHome(h_GestorVideoConferencias* oGestor);
	
};

#endif

