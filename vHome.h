#ifndef VHOME_H
#define VHOME_H
#include "wxfb_project.h"

class vHome : public MyFrame2 {
	
	
public:
	vHome(wxWindow *parent=NULL);
	wxHtmlWindow* getHtml();
	~vHome();
};

#endif

