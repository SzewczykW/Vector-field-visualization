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
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/textctrl.h>
#include <wx/scrolbar.h>
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
class MyFrame1 : public wxFrame {
	private:

	protected:
	wxStaticText* m_staticText1;
	wxStaticText* m_staticText2;
	wxChoice* XFun;
	wxStaticText* m_staticText3;
	wxTextCtrl* AParam;
	wxStaticText* m_staticText4;
	wxChoice* YFun;
	wxStaticText* m_staticText5;
	wxTextCtrl* BParam;
	wxStaticText* m_staticText6;
	wxChoice* ZFun;
	wxStaticText* m_staticText7;
	wxTextCtrl* CParam;
	wxStaticText* info_staticText;
	wxStaticText* m_staticText26;
	wxStaticText* m_staticText27;
	wxStaticText* m_staticText33;
	wxScrollBar* XScale;
	wxStaticText* m_staticText28;
	wxStaticText* xScale_staticText;
	wxStaticText* m_staticText29;
	wxStaticText* m_staticText34;
	wxScrollBar* YScale;
	wxStaticText* m_staticText30;
	wxStaticText* yScale_staticText;
	wxStaticText* m_staticText31;
	wxStaticText* m_staticText35;
	wxScrollBar* ZScale;
	wxStaticText* m_staticText32;
	wxStaticText* zScale_staticText;
	wxStaticText* m_staticText8;
	wxStaticText* m_staticText9;
	wxTextCtrl* XMin;
	wxStaticText* m_staticText10;
	wxTextCtrl* XMax;
	wxStaticText* m_staticText11;
	wxTextCtrl* YMin;
	wxStaticText* m_staticText12;
	wxTextCtrl* YMax;
	wxStaticText* m_staticText13;
	wxTextCtrl* ZMin;
	wxStaticText* m_staticText14;
	wxTextCtrl* ZMax;
	wxStaticText* m_staticText15;
	wxScrollBar* ArrowScale;
	wxStaticText* arrow_staticText;
	wxCheckBox* AutoLen;
	wxStaticText* m_staticText17;
	wxStaticText* m_staticText18;
	wxStaticText* x0_staticText;
	wxScrollBar* XRot;
	wxStaticText* x360_staticText;
	wxStaticText* xRot_staticText;
	wxStaticText* m_staticText19;
	wxStaticText* y0_staticText;
	wxScrollBar* YRot;
	wxStaticText* y360_staticText;
	wxStaticText* yRot_staticText;
	wxStaticText* m_staticText20;
	wxStaticText* z0_staticText;
	wxScrollBar* ZRot;
	wxStaticText* z360_staticText;
	wxStaticText* zRot_staticText;
	wxCheckBox* AddSurface;
	wxStaticText* m_staticText22;
	wxTextCtrl* XSurface;
	wxStaticText* m_staticText23;
	wxTextCtrl* YSurface;
	wxStaticText* m_staticText24;
	wxTextCtrl* ZSurface;
	wxButton* SaveButton;

	// Virtual event handlers, override them in your derived class
	virtual void MainPanelOnSize ( wxSizeEvent& event ) { event.Skip (); }
	virtual void MainPanelRepaint ( wxUpdateUIEvent& event ) { event.Skip (); }
	virtual void XFunOnChoice ( wxCommandEvent& event ) { event.Skip (); }
	virtual void AParamOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void YFunOnChoice ( wxCommandEvent& event ) { event.Skip (); }
	virtual void BParamOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void ZFunOnChoice ( wxCommandEvent& event ) { event.Skip (); }
	virtual void CParamOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void XScaleOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void YScaleOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void ZScaleOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void XMinOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void XMaxOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void YMinOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void YMaxOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void ZMinOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void ZMaxOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void ArrowBarOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void AutoLenOnCheckBox ( wxCommandEvent& event ) { event.Skip (); }
	virtual void XRotOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void YRotOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void ZRotOnScroll ( wxScrollEvent& event ) { event.Skip (); }
	virtual void AddSurfaceOnCheckBox ( wxCommandEvent& event ) { event.Skip (); }
	virtual void XSurfaceOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void YSurfaceOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void ZSurfaceOnText ( wxCommandEvent& event ) { event.Skip (); }
	virtual void SaveButtonOnButtonClick ( wxCommandEvent& event ) { event.Skip (); }


	public:
	wxPanel* MainPanel;

	MyFrame1 ( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT ( "Vector Field Visualisation" ), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize ( 1280, 800 ), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL );

	~MyFrame1 ();

};

