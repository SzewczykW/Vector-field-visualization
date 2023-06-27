#include "GUIMyFrame1.h"

GUIMyFrame1::GUIMyFrame1 ( wxWindow* parent )
    : 
    MyFrame1 ( parent ), _CoordinateSystem ( new CoordinateSystem () )
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
    x0_staticText->SetLabel ( _ ( "0\u00B0" ) );
    x360_staticText->SetLabel ( _ ( "360\u00B0" ) );
    y0_staticText->SetLabel ( _ ( "0\u00B0" ) );
    y360_staticText->SetLabel ( _ ( "360\u00B0" ) );
    z0_staticText->SetLabel ( _ ( "0\u00B0" ) );
    z360_staticText->SetLabel ( _ ( "360\u00B0" ) );
}

GUIMyFrame1::~GUIMyFrame1()
{
	delete _CoordinateSystem;
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
    _CoordinateSystem->getSettings ().SetXFun ( funType ( XFun->GetSelection () ) );
    Repaint ();
}

void GUIMyFrame1::AParamOnText ( wxCommandEvent& event )
{
    double a;
    if ( AParam->GetValue ().ToDouble ( &a ) )
    {
        _CoordinateSystem->getSettings ().SetA ( a );
        Repaint ();
    }
    else
    {
        wxBell ();
    }
}

void GUIMyFrame1::YFunOnChoice ( wxCommandEvent& event )
{
    _CoordinateSystem->getSettings ().SetYFun ( funType ( YFun->GetSelection () ) );
    Repaint ();
}

void GUIMyFrame1::BParamOnText ( wxCommandEvent& event )
{
    double b;
    if ( BParam->GetValue ().ToDouble ( &b ) )
    {
        _CoordinateSystem->getSettings ().SetB ( b );
        Repaint ();
    }
    else
    {
        wxBell ();
    }
}

void GUIMyFrame1::ZFunOnChoice ( wxCommandEvent& event )
{
    _CoordinateSystem->getSettings ().SetZFun ( funType ( ZFun->GetSelection () ) );
    Repaint ();
}

void GUIMyFrame1::CParamOnText ( wxCommandEvent& event )
{
    double c;
    if ( CParam->GetValue ().ToDouble ( &c ) )
    {
        _CoordinateSystem->getSettings ().SetC ( c );
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
    _CoordinateSystem->getSettings ().SetXScale ( XScale->GetThumbPosition () );
    Repaint ();
}

void GUIMyFrame1::YScaleOnScroll ( wxScrollEvent& event )
{
    yScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YScale->GetThumbPosition () + 10 ) );
    _CoordinateSystem->getSettings ().SetYScale ( YScale->GetThumbPosition () );
    Repaint ();
}

void GUIMyFrame1::ZScaleOnScroll ( wxScrollEvent& event )
{
    zScale_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZScale->GetThumbPosition () + 10 ) );
    _CoordinateSystem->getSettings ().SetZScale ( ZScale->GetThumbPosition () );
    Repaint ();
}

void GUIMyFrame1::XMinOnText ( wxCommandEvent& event )
{
    double x;
    if ( XMin->GetValue ().ToDouble ( &x ) )
    {
        _CoordinateSystem->getSettings ().SetXMin ( x );
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
        _CoordinateSystem->getSettings ().SetXMax ( x );
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
        _CoordinateSystem->getSettings ().SetYMin ( y );
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
        _CoordinateSystem->getSettings ().SetYMax ( y );
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
        _CoordinateSystem->getSettings ().SetZMin ( z );
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
        _CoordinateSystem->getSettings ().SetZMax ( z );
        Repaint ();
    }
    else
    {
        wxBell ();
    }
}

void GUIMyFrame1::ArrowBarOnScroll ( wxScrollEvent& event )
{
    _CoordinateSystem->getSettings ().SetArrowLength ( ArrowScale->GetThumbPosition () );
    arrow_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ArrowScale->GetThumbPosition () ) );
    Repaint ();
}

void GUIMyFrame1::AutoLenOnCheckBox ( wxCommandEvent& event )
{
    if ( AutoLen->IsChecked () )
    {
        ArrowScale->Disable ();
        _CoordinateSystem->getSettings ().SetAutoScale ( true );
        Repaint ();
    }
    else
    {
        ArrowScale->Enable ();
        _CoordinateSystem->getSettings ().SetAutoScale ( false );
        _CoordinateSystem->getSettings ().SetArrowLength ( ArrowScale->GetThumbPosition () );
        Repaint ();
    }
}

void GUIMyFrame1::XRotOnScroll ( wxScrollEvent& event )
{
    _CoordinateSystem->getSettings ().SetXRot ( XRot->GetThumbPosition () );
    xRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), XRot->GetThumbPosition () ) );
    Repaint ();
}

void GUIMyFrame1::YRotOnScroll ( wxScrollEvent& event )
{
    _CoordinateSystem->getSettings ().SetYRot ( YRot->GetThumbPosition () );
    yRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), YRot->GetThumbPosition () ) );
    Repaint ();
}

void GUIMyFrame1::ZRotOnScroll ( wxScrollEvent& event )
{
    _CoordinateSystem->getSettings ().SetZRot ( ZRot->GetThumbPosition () );
    zRot_staticText->SetLabel ( wxString::Format ( wxT ( "%d" ), ZRot->GetThumbPosition () ) );
    Repaint ();
}

void GUIMyFrame1::AddSurfaceOnCheckBox ( wxCommandEvent& event )
{
    _CoordinateSystem->getSettings ().setSurface ( AutoLen->IsChecked () );
    Repaint ();
}

void GUIMyFrame1::XSurfaceOnText ( wxCommandEvent& event )
{
    if ( AddSurface->IsChecked () )
    {
        double x;
        if ( XSurface->GetValue ().ToDouble ( &x ) )
        {
            _CoordinateSystem->getSettings ().SetXSurface ( x );
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
        if ( YSurface->GetValue ().ToDouble ( &y ) )
        {
            _CoordinateSystem->getSettings ().SetYSurface ( y );
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
        if ( ZSurface->GetValue ().ToDouble ( &z ) )
        {
            _CoordinateSystem->getSettings ().SetZSurface ( z );
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
    wxClientDC dc1 ( MainPanel );
    wxBufferedDC dc ( &dc1 );
    double height = MainPanel->GetSize ().GetHeight ();
    double width = MainPanel->GetSize ().GetWidth ();

    _CoordinateSystem->draw ( &dc, width, height );
}