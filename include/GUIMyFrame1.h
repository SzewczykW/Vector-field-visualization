#ifndef __GUIMyFrame1__
#define __GUIMyFrame1__

/**
@file
Subclass of MyFrame1, which was generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include <wx/wxprec.h>
#include "CoordinateSystem.h"

/** Implementing MyFrame1 */
class GUIMyFrame1 : public MyFrame1
{
	protected:
		// Handlers for MyFrame1 events.
		void MainPanelOnSize( wxSizeEvent& event );
		void MainPanelRepaint( wxUpdateUIEvent& event );
		void XFunOnChoice( wxCommandEvent& event );
		void AParamOnText( wxCommandEvent& event );
		void YFunOnChoice( wxCommandEvent& event );
		void BParamOnText( wxCommandEvent& event );
		void ZFunOnChoice( wxCommandEvent& event );
		void CParamOnText( wxCommandEvent& event );
		void XScaleOnScroll( wxScrollEvent& event );
		void YScaleOnScroll( wxScrollEvent& event );
		void ZScaleOnScroll( wxScrollEvent& event );
		void XMinOnText( wxCommandEvent& event );
		void XMaxOnText( wxCommandEvent& event );
		void YMinOnText( wxCommandEvent& event );
		void YMaxOnText( wxCommandEvent& event );
		void ZMinOnText( wxCommandEvent& event );
		void ZMaxOnText( wxCommandEvent& event );
		void ArrowBarOnScroll( wxScrollEvent& event );
		void AutoLenOnCheckBox( wxCommandEvent& event );
		void XRotOnScroll( wxScrollEvent& event );
		void YRotOnScroll( wxScrollEvent& event );
		void ZRotOnScroll( wxScrollEvent& event );
		void AddSurfaceOnCheckBox( wxCommandEvent& event );
		void XSurfaceOnText( wxCommandEvent& event );
		void YSurfaceOnText( wxCommandEvent& event );
		void ZSurfaceOnText( wxCommandEvent& event );
		void SaveButtonOnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		GUIMyFrame1( wxWindow* parent );
	//// end generated class members
		void Repaint();
	private:
		CoordinateSystem _CoordinateSystem;
};

#endif // __GUIMyFrame1__
