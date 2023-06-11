///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/scrolbar.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxPanel* MainPanel;
		wxStaticText* m_staticText1;
		wxChoice* function;
		wxStaticText* m_staticText2;
		wxScrollBar* a_scrollBar;
		wxStaticText* m_staticText3;
		wxScrollBar* b_scrollBar;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText132;
		wxTextCtrl* x_start;
		wxStaticText* m_staticText142;
		wxTextCtrl* x_stop;
		wxStaticText* m_staticText131;
		wxTextCtrl* y_start;
		wxStaticText* m_staticText141;
		wxTextCtrl* y_stop;
		wxStaticText* m_staticText13;
		wxTextCtrl* z_start;
		wxStaticText* m_staticText14;
		wxTextCtrl* z_stop;
		wxStaticText* m_staticText15;
		wxTextCtrl* divide;
		wxStaticText* m_staticText4;
		wxScrollBar* arrow_length;
		wxCheckBox* auto_arrows;
		wxStaticText* m_staticText6;
		wxScrollBar* x_scrollBar;
		wxStaticText* m_staticText61;
		wxScrollBar* y_scrollBar;
		wxStaticText* m_staticText62;
		wxScrollBar* z_scrollBar;
		wxCheckBox* addSurface;
		wxButton* save;

		// Virtual event handlers, override them in your derived class
		virtual void MainPanelOnSize( wxSizeEvent& event ) { event.Skip(); }
		virtual void MainPanelOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void functionOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void a_scrollBarOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void b_scrollBarOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void x_startOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void x_stopOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void y_startOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void y_stopOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void z_startOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void z_stopOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void divideOnText( wxCommandEvent& event ) { event.Skip(); }
		virtual void arrow_lengthOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void auto_arrowsOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void x_scrollBarOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void y_scrollBarOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void z_scrollBarOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void addSurfaceOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void saveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Wizualizacja Pola Wektorowego"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 629,517 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

