#ifndef V_HOME_H
#define V_HOME_H
#include "wxfb_project.h"

class v_Home : public MyFrame1 {
	
private:
	
protected:
	void ev_ClickCheckBox1( wxCommandEvent& event )  override;
	void ev_ClickVidConf( wxGridEvent& event )  override;
	void ev_DClikVidConf( wxGridEvent& event )  override;
	void ev_ClickCheckBox2( wxCommandEvent& event )  override;
	void ev_CLick( wxGridEvent& event )  override;
	void ev_DClick( wxGridEvent& event )  override;
	void ev_ClickGuardar( wxCommandEvent& event )  override;
	void ev_ClickSalir( wxCommandEvent& event )  override;
	
public:
	v_Home(wxWindow *parent=NULL);
	~v_Home();
};

#endif

