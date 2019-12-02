#include "vHome.h"

vHome::vHome(wxWindow *parent) : MyFrame2(parent) {
	
	this->m_htmlWin1->LoadPage("home.html");
}

wxHtmlWindow* vHome::getHtml() {
	return this->m_htmlWin1;
}

vHome::~vHome() {
	
}

