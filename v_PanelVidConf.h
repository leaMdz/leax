#ifndef V_PANELVIDCONF_H
#define V_PANELVIDCONF_H
#include "wxfb_project.h"

class v_PanelVidConf : public MyPanel2 {
	
private:
	
protected:
	void ev_ClickAgregar( wxCommandEvent& event )  override;
	void ev_ClickGuardar( wxCommandEvent& event )  override;
	void ev_ClickSalir( wxCommandEvent& event )  override;
	
public:
	v_PanelVidConf(wxWindow *parent=NULL);
	~v_PanelVidConf();
};

#endif

