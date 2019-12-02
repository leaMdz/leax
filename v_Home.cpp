#include "v_Home.h"

v_Home::v_Home(wxWindow *parent) : MyFrame1(parent) {
	this->SetTitle("AGENDA VIDEOCONFERENCIAS - FCM");
	
	
	
	this->m_button1->SetLabel("AGREGAR");
	this->m_button2->SetLabel("MODIFICAR");
	
	this->m_button3->SetLabel("ELIMINAR");
	this->m_button4->SetLabel("GUARDAR");
	
	this->m_button5->SetLabel("SALIR");
	
	this->m_checkBox1->SetLabel("Mostrar VidConf activas");
	this->m_checkBox2->SetLabel("Mostrar Contactos");
	
	this->m_grid4->DeleteRows(0,this->m_grid4->GetNumberRows());
	this->m_grid4->SetColSize(0,30);
	this->m_grid4->SetColSize(0,100);
	
	this->m_grid4->Hide();
	
	
	this->m_grid3->AutoSize();
	this->m_grid3->DeleteRows(0,this->m_grid3->GetNumberRows());
	this->m_grid3->SetColFormatNumber(5);
	this->m_grid3->SetRowLabelSize(0);
	this->m_grid3->SetColLabelSize(50);
	this->m_grid3->SetColSize(0,30);
	this->m_grid3->SetColSize(1,360);
	this->m_grid3->SetColSize(2,100);
	this->m_grid3->SetColSize(3,60);
	this->m_grid3->SetColSize(4,170);
	this->m_grid3->SetColLabelValue(0,"ID");
	this->m_grid3->SetColLabelValue(1,"TITULO");
	this->m_grid3->SetColLabelValue(2,"FECHA");
	this->m_grid3->SetColLabelValue(3,"HR");
	this->m_grid3->SetColLabelValue(4,"SIT CONEXION");
	
}

v_Home::~v_Home() {
	
}

void v_Home::ev_ClickCheckBox1( wxCommandEvent& event )  {
	event.Skip();
}

void v_Home::ev_ClickVidConf( wxGridEvent& event )  {
	event.Skip();
}

void v_Home::ev_DClikVidConf( wxGridEvent& event )  {
	event.Skip();
}

void v_Home::ev_ClickCheckBox2( wxCommandEvent& event )  {
	event.Skip();
}

void v_Home::ev_CLick( wxGridEvent& event )  {
	event.Skip();
}

void v_Home::ev_DClick( wxGridEvent& event )  {
	event.Skip();
}

void v_Home::ev_ClickGuardar( wxCommandEvent& event )  {
	event.Skip();
}

void v_Home::ev_ClickSalir( wxCommandEvent& event )  {
	this->Show(false);

}

