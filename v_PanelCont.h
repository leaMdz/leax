#ifndef V_PANELCONT_H
#define V_PANELCONT_H
#include "wxfb_project.h"

class v_PanelCont : public MyPanel3 {
	
private:
	
protected:
	void ev_ClickAgregar( wxCommandEvent& event )  override;
	void ev_ClickGuardar( wxCommandEvent& event )  override;
	void ev_ClickSalir( wxCommandEvent& event )  override;
	
public:
	v_PanelCont(wxWindow *parent=NULL);
	~v_PanelCont();
};

#endif

