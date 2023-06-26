#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1 ( wxWindow* parent )
	:
	MyFrame1 ( parent )
{
	XScale->SetScrollbar ( 0, 1, 91, 1, true );
	YScale->SetScrollbar ( 0, 1, 91, 1, true );
	ZScale->SetScrollbar ( 0, 1, 91, 1, true );
	XRot->SetScrollbar ( 0, 1, 360, 1, true );
	YRot->SetScrollbar ( 0, 1, 360, 1, true );
	ZRot->SetScrollbar ( 0, 1, 360, 1, true );
	ArrowScale->SetScrollbar ( 0, 1, 100, true ); //TO MOZNA BEDZIE ZMIENIC BO IDK W JAKIEJ SKALI BEDA STRZALKI
	ArrowScale->Disable ();
	xScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), XScale->GetThumbPosition () + 10 ) );
	yScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YScale->GetThumbPosition () + 10 ) );
	zScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZScale->GetThumbPosition () + 10 ) );
	xRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), XRot->GetThumbPosition () ) );
	yRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YRot->GetThumbPosition () ) );
	zRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZRot->GetThumbPosition () ) );
	arrow_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ArrowScale->GetThumbPosition () ) );
}

void GUIMyFrame1::MainPanelOnSize ( wxSizeEvent& event )
{
	Repaint ();
}

void GUIMyFrame1::MainPanelRepaint ( wxUpdateUIEvent& event )
{
	Repaint ();
}

void GUIMyFrame1::XFunOnChoice ( wxCommandEvent& event )
{
	XFun->GetSelection ();
	Repaint ();
}

void GUIMyFrame1::AParamOnText ( wxCommandEvent& event )
{
	double a;
	if ( XMin->GetValue ().ToDouble ( &a ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::YFunOnChoice ( wxCommandEvent& event )
{
	YFun->GetSelection ();
	Repaint ();
}

void GUIMyFrame1::BParamOnText ( wxCommandEvent& event )
{
	double b;
	if ( XMin->GetValue ().ToDouble ( &b ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::ZFunOnChoice ( wxCommandEvent& event )
{
	ZFun->GetSelection ();
	Repaint ();
}

void GUIMyFrame1::CParamOnText ( wxCommandEvent& event )
{
	double c;
	if ( XMin->GetValue ().ToDouble ( &c ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::XScaleOnScroll ( wxScrollEvent& event )
{
	xScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), XScale->GetThumbPosition () + 10 ) );
	Repaint ();
}

void GUIMyFrame1::YScaleOnScroll ( wxScrollEvent& event )
{
	YScale->GetThumbPosition ();
	yScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YScale->GetThumbPosition () + 10 ) );
	Repaint ();
}

void GUIMyFrame1::ZScaleOnScroll ( wxScrollEvent& event )
{
	ZScale->GetThumbPosition ();
	zScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZScale->GetThumbPosition () + 10 ) );
	Repaint ();
}

void GUIMyFrame1::XMinOnText ( wxCommandEvent& event )
{
	double x;
	if ( XMin->GetValue ().ToDouble ( &x ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::XMaxOnText ( wxCommandEvent& event )
{
	double x;
	if ( XMax->GetValue ().ToDouble ( &x ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::YMinOnText ( wxCommandEvent& event )
{
	double y;
	if ( YMin->GetValue ().ToDouble ( &y ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::YMaxOnText ( wxCommandEvent& event )
{
	double y;
	if ( YMax->GetValue ().ToDouble ( &y ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::ZMinOnText ( wxCommandEvent& event )
{
	double z;
	if ( ZMin->GetValue ().ToDouble ( &z ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::ZMaxOnText ( wxCommandEvent& event )
{
	double z;
	if ( ZMax->GetValue ().ToDouble ( &z ) )
	{
		Repaint ();
	}
	else
	{
		wxBell ();
	}
}

void GUIMyFrame1::ArrowBarOnScroll ( wxScrollEvent& event )
{
	ArrowScale->GetThumbPosition ();
	Repaint ();
	arrow_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ArrowScale->GetThumbPosition () ) );
}

void GUIMyFrame1::AutoLenOnCheckBox ( wxCommandEvent& event )
{
	if ( AutoLen->IsChecked () )
	{
		ArrowScale->Disable ();
		Repaint ();
	}
	else
	{
		ArrowScale->Enable ();
		ArrowScale->GetThumbPosition ();
		Repaint ();
	}
}

void GUIMyFrame1::XRotOnScroll ( wxScrollEvent& event )
{
	XRot->GetThumbPosition ();
	xRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), XRot->GetThumbPosition () ) );
	Repaint ();
}

void GUIMyFrame1::YRotOnScroll ( wxScrollEvent& event )
{
	YRot->GetThumbPosition ();
	yRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YRot->GetThumbPosition () ) );
	Repaint ();
}

void GUIMyFrame1::ZRotOnScroll ( wxScrollEvent& event )
{
	zRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZRot->GetThumbPosition () ) );
	ZRot->GetThumbPosition ();
	Repaint ();
}

void GUIMyFrame1::AddSurfaceOnCheckBox ( wxCommandEvent& event )
{
	AutoLen->IsChecked ();
}

void GUIMyFrame1::XSurfaceOnText ( wxCommandEvent& event )
{
	if ( AddSurface->IsChecked () )
	{
		double x;
		if ( XMin->GetValue ().ToDouble ( &x ) )
		{
			Repaint ();
		}
		else
		{
			wxBell ();
		}
	}
}

void GUIMyFrame1::YSurfaceOnText ( wxCommandEvent& event )
{
	if ( AddSurface->IsChecked () )
	{
		double y;
		if ( XMin->GetValue ().ToDouble ( &y ) )
		{
			Repaint ();
		}
		else
		{
			wxBell ();
		}
	}
}

void GUIMyFrame1::ZSurfaceOnText ( wxCommandEvent& event )
{
	if ( AddSurface->IsChecked () )
	{
		double z;
		if ( XMin->GetValue ().ToDouble ( &z ) )
		{
			Repaint ();
		}
		else
		{
			wxBell ();
		}
	}
}

void GUIMyFrame1::SaveButtonOnButtonClick ( wxCommandEvent& event )
{
	wxFileDialog WxSaveFileDialog ( this, _ ( "Choose a file" ), _ ( "" ), _ ( "" ), _ ( "*.*" ), wxFD_SAVE );
	WxSaveFileDialog.SetWildcard ( "JPEG files (*.jpg)|*.jpg|BMP files(*.bmp) | *.bmp |GIF files(*.gif) | *.gif|PNG files(*.png)|*.png " );
	if ( WxSaveFileDialog.ShowModal () )
	{

	}
}


void GUIMyFrame1::Repaint ()
{

}