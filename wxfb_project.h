///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/statline.h>
#include <wx/timectrl.h>
#include <wx/choice.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;
		wxCheckBox* m_checkBox1;
		wxGrid* m_grid3;
		wxCheckBox* m_checkBox2;
		wxGrid* m_grid4;
		wxButton* m_button4;
		wxButton* m_button5;

		// Virtual event handlers, overide them in your derived class
		virtual void ev_ClickCheckBox1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickVidConf( wxGridEvent& event ) { event.Skip(); }
		virtual void ev_DClikVidConf( wxGridEvent& event ) { event.Skip(); }
		virtual void ev_ClickCheckBox2( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_CLick( wxGridEvent& event ) { event.Skip(); }
		virtual void ev_DClick( wxGridEvent& event ) { event.Skip(); }
		virtual void ev_ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickSalir( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 950,509 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyPanel2
///////////////////////////////////////////////////////////////////////////////
class MyPanel2 : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText4;
		wxDatePickerCtrl* m_datePicker1;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText6;
		wxTimePickerCtrl* m_timePicker2;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrl10;
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText8;
		wxChoice* m_choice1;
		wxButton* m_button14;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl5;
		wxButton* m_button12;
		wxButton* m_button13;

		// Virtual event handlers, overide them in your derived class
		virtual void ev_ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickSalir( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyPanel2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~MyPanel2();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyPanel3
///////////////////////////////////////////////////////////////////////////////
class MyPanel3 : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl6;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl7;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textCtrl8;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_textCtrl9;
		wxButton* m_button15;
		wxChoice* m_choice3;
		wxButton* m_button16;
		wxButton* m_button17;

		// Virtual event handlers, overide them in your derived class
		virtual void ev_ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ev_ClickSalir( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyPanel3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 503,192 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~MyPanel3();

};

