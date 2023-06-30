///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 1280,800 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	MainPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	MainPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer2->Add( MainPanel, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Function: V(x,y,z) = Pi+Qj+Rk"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer3->Add( m_staticText1, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("P(x,y,z):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer4->Add( m_staticText2, 0, wxALL, 5 );

	wxString XFunChoices[] = { wxT("a"), wxT("ax"), wxT("ax^2"), wxT("ax^3"), wxT("ln(ax)"), wxT("e^(ax)"), wxT("sin(ax)"), wxT("cos(ax)") };
	int XFunNChoices = sizeof( XFunChoices ) / sizeof( wxString );
	XFun = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, XFunNChoices, XFunChoices, 0 );
	XFun->SetSelection( 0 );
	XFun->SetMinSize( wxSize( 60,-1 ) );

	bSizer4->Add( XFun, 0, wxALL, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("a:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALL, 5 );

	AParam = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	AParam->SetMinSize( wxSize( 40,-1 ) );

	bSizer4->Add( AParam, 0, wxALL, 5 );


	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Q(x,y,z):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer6->Add( m_staticText4, 0, wxALL, 5 );

	wxString YFunChoices[] = { wxT("b"), wxT("by"), wxT("by^2"), wxT("by^3"), wxT("ln(by)"), wxT("e^(by)"), wxT("sin(by)"), wxT("cos(by)") };
	int YFunNChoices = sizeof( YFunChoices ) / sizeof( wxString );
	YFun = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, YFunNChoices, YFunChoices, 0 );
	YFun->SetSelection( 0 );
	YFun->SetMinSize( wxSize( 60,-1 ) );

	bSizer6->Add( YFun, 0, wxALL, 5 );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("b:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer6->Add( m_staticText5, 0, wxALL, 5 );

	BParam = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	BParam->SetMinSize( wxSize( 40,-1 ) );

	bSizer6->Add( BParam, 0, wxALL, 5 );


	bSizer3->Add( bSizer6, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("R(x,y,z):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALL, 5 );

	wxString ZFunChoices[] = { wxT("c"), wxT("cz"), wxT("cz^2"), wxT("cz^3"), wxT("ln(cz)"), wxT("e^(cz)"), wxT("sin(cz)"), wxT("cos(cz)") };
	int ZFunNChoices = sizeof( ZFunChoices ) / sizeof( wxString );
	ZFun = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, ZFunNChoices, ZFunChoices, 0 );
	ZFun->SetSelection( 0 );
	ZFun->SetMinSize( wxSize( 60,-1 ) );

	bSizer8->Add( ZFun, 0, wxALL, 5 );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("c:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer8->Add( m_staticText7, 0, wxALL, 5 );

	CParam = new wxTextCtrl( this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	CParam->SetMinSize( wxSize( 40,-1 ) );

	bSizer8->Add( CParam, 0, wxALL, 5 );


	bSizer3->Add( bSizer8, 1, wxEXPAND, 5 );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Axis Scale:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer3->Add( m_staticText26, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("x:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	m_staticText27->SetForegroundColour( wxColour( 128, 0, 0 ) );

	bSizer22->Add( m_staticText27, 0, wxALL, 5 );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer22->Add( m_staticText33, 0, wxALL, 5 );

	XScale = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer22->Add( XScale, 1, wxALL, 5 );

	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	bSizer22->Add( m_staticText28, 0, wxALL, 5 );

	xScale_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	xScale_staticText->Wrap( -1 );
	bSizer22->Add( xScale_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer22, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	m_staticText29->SetForegroundColour( wxColour( 0, 128, 0 ) );

	bSizer7->Add( m_staticText29, 0, wxALL, 5 );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer7->Add( m_staticText34, 0, wxALL, 5 );

	YScale = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer7->Add( YScale, 1, wxALL, 5 );

	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	bSizer7->Add( m_staticText30, 0, wxALL, 5 );

	yScale_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	yScale_staticText->Wrap( -1 );
	bSizer7->Add( yScale_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	m_staticText31->SetForegroundColour( wxColour( 0, 0, 128 ) );

	bSizer9->Add( m_staticText31, 0, wxALL, 5 );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer9->Add( m_staticText35, 0, wxALL, 5 );

	ZScale = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer9->Add( ZScale, 1, wxALL, 5 );

	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("100"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer9->Add( m_staticText32, 0, wxALL, 5 );

	zScale_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	zScale_staticText->Wrap( -1 );
	bSizer9->Add( zScale_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer9, 1, wxEXPAND, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Limits:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer3->Add( m_staticText8, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("x min:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetForegroundColour( wxColour( 128, 0, 0 ) );

	bSizer10->Add( m_staticText9, 0, wxALL, 5 );

	XMin = new wxTextCtrl( this, wxID_ANY, wxT("-5"), wxDefaultPosition, wxDefaultSize, 0 );
	XMin->SetMinSize( wxSize( 50,-1 ) );

	bSizer10->Add( XMin, 0, wxALL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("x max:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->SetForegroundColour( wxColour( 128, 0, 0 ) );

	bSizer10->Add( m_staticText10, 0, wxALL, 5 );

	XMax = new wxTextCtrl( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	XMax->SetMinSize( wxSize( 50,-1 ) );

	bSizer10->Add( XMax, 0, wxALL, 5 );


	bSizer3->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("y min:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetForegroundColour( wxColour( 0, 128, 0 ) );

	bSizer11->Add( m_staticText11, 0, wxALL, 5 );

	YMin = new wxTextCtrl( this, wxID_ANY, wxT("-5"), wxDefaultPosition, wxDefaultSize, 0 );
	YMin->SetMinSize( wxSize( 50,-1 ) );

	bSizer11->Add( YMin, 0, wxALL, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("y max:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetForegroundColour( wxColour( 0, 128, 0 ) );

	bSizer11->Add( m_staticText12, 0, wxALL, 5 );

	YMax = new wxTextCtrl( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	YMax->SetMinSize( wxSize( 50,-1 ) );

	bSizer11->Add( YMax, 0, wxALL, 5 );


	bSizer3->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("z min:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetForegroundColour( wxColour( 0, 0, 128 ) );

	bSizer12->Add( m_staticText13, 0, wxALL, 5 );

	ZMin = new wxTextCtrl( this, wxID_ANY, wxT("-5"), wxDefaultPosition, wxDefaultSize, 0 );
	ZMin->SetMinSize( wxSize( 50,-1 ) );

	bSizer12->Add( ZMin, 0, wxALL, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("z max:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetForegroundColour( wxColour( 0, 0, 128 ) );

	bSizer12->Add( m_staticText14, 0, wxALL, 5 );

	ZMax = new wxTextCtrl( this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	ZMax->SetMinSize( wxSize( 50,-1 ) );

	bSizer12->Add( ZMax, 0, wxALL, 5 );


	bSizer3->Add( bSizer12, 1, wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Arrow Scale:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer3->Add( m_staticText15, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	ArrowScale = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer13->Add( ArrowScale, 0, wxALL, 5 );

	arrow_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	arrow_staticText->Wrap( -1 );
	bSizer13->Add( arrow_staticText, 0, wxALL, 5 );

	AutoLen = new wxCheckBox( this, wxID_ANY, wxT("Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	AutoLen->SetValue(true);
	bSizer13->Add( AutoLen, 0, wxALL, 5 );


	bSizer3->Add( bSizer13, 1, wxEXPAND, 5 );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Rotation:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer3->Add( m_staticText17, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("x:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->SetForegroundColour( wxColour( 128, 0, 0 ) );

	bSizer14->Add( m_staticText18, 0, wxALL, 5 );

	x0_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	x0_staticText->Wrap( -1 );
	bSizer14->Add( x0_staticText, 0, wxALL, 5 );

	XRot = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer14->Add( XRot, 0, wxALL, 5 );

	x360_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	x360_staticText->Wrap( -1 );
	bSizer14->Add( x360_staticText, 0, wxALL, 5 );

	xRot_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	xRot_staticText->Wrap( -1 );
	bSizer14->Add( xRot_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	m_staticText19->SetForegroundColour( wxColour( 0, 128, 0 ) );

	bSizer17->Add( m_staticText19, 0, wxALL, 5 );

	y0_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	y0_staticText->Wrap( -1 );
	bSizer17->Add( y0_staticText, 0, wxALL, 5 );

	YRot = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer17->Add( YRot, 0, wxALL, 5 );

	y360_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	y360_staticText->Wrap( -1 );
	bSizer17->Add( y360_staticText, 0, wxALL, 5 );

	yRot_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	yRot_staticText->Wrap( -1 );
	bSizer17->Add( yRot_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetForegroundColour( wxColour( 0, 0, 128 ) );

	bSizer18->Add( m_staticText20, 0, wxALL, 5 );

	z0_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	z0_staticText->Wrap( -1 );
	bSizer18->Add( z0_staticText, 0, wxALL, 5 );

	ZRot = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer18->Add( ZRot, 0, wxALL, 5 );

	z360_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	z360_staticText->Wrap( -1 );
	bSizer18->Add( z360_staticText, 0, wxALL, 5 );

	zRot_staticText = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	zRot_staticText->Wrap( -1 );
	bSizer18->Add( zRot_staticText, 0, wxALL, 5 );


	bSizer3->Add( bSizer18, 1, wxEXPAND, 5 );

	AddSurface = new wxCheckBox( this, wxID_ANY, wxT("Add surface"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( AddSurface, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("x:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	m_staticText22->SetForegroundColour( wxColour( 128, 0, 0 ) );

	bSizer19->Add( m_staticText22, 0, wxALL, 5 );

	XSurface = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	XSurface->SetMinSize( wxSize( 40,-1 ) );

	bSizer19->Add( XSurface, 0, wxALL, 5 );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	m_staticText23->SetForegroundColour( wxColour( 0, 128, 0 ) );

	bSizer19->Add( m_staticText23, 0, wxALL, 5 );

	YSurface = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	YSurface->SetMinSize( wxSize( 40,-1 ) );

	bSizer19->Add( YSurface, 0, wxALL, 5 );

	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	m_staticText24->SetForegroundColour( wxColour( 0, 0, 128 ) );

	bSizer19->Add( m_staticText24, 0, wxALL, 5 );

	ZSurface = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	ZSurface->SetMinSize( wxSize( 40,-1 ) );

	bSizer19->Add( ZSurface, 0, wxALL, 5 );


	bSizer3->Add( bSizer19, 1, wxEXPAND, 5 );

	SaveButton = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( SaveButton, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer1->Add( bSizer3, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	MainPanel->Connect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::MainPanelOnSize ), NULL, this );
	MainPanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::MainPanelRepaint ), NULL, this );
	XFun->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::XFunOnChoice ), NULL, this );
	AParam->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::AParamOnText ), NULL, this );
	YFun->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::YFunOnChoice ), NULL, this );
	BParam->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::BParamOnText ), NULL, this );
	ZFun->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::ZFunOnChoice ), NULL, this );
	CParam->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::CParamOnText ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	XMin->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XMinOnText ), NULL, this );
	XMax->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XMaxOnText ), NULL, this );
	YMin->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YMinOnText ), NULL, this );
	YMax->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YMaxOnText ), NULL, this );
	ZMin->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZMinOnText ), NULL, this );
	ZMax->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZMaxOnText ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	AutoLen->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::AutoLenOnCheckBox ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	AddSurface->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::AddSurfaceOnCheckBox ), NULL, this );
	XSurface->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XSurfaceOnText ), NULL, this );
	YSurface->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YSurfaceOnText ), NULL, this );
	ZSurface->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZSurfaceOnText ), NULL, this );
	SaveButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::SaveButtonOnButtonClick ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	MainPanel->Disconnect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::MainPanelOnSize ), NULL, this );
	MainPanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::MainPanelRepaint ), NULL, this );
	XFun->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::XFunOnChoice ), NULL, this );
	AParam->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::AParamOnText ), NULL, this );
	YFun->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::YFunOnChoice ), NULL, this );
	BParam->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::BParamOnText ), NULL, this );
	ZFun->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::ZFunOnChoice ), NULL, this );
	CParam->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::CParamOnText ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	XScale->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::XScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	YScale->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::YScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	ZScale->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ZScaleOnScroll ), NULL, this );
	XMin->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XMinOnText ), NULL, this );
	XMax->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XMaxOnText ), NULL, this );
	YMin->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YMinOnText ), NULL, this );
	YMax->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YMaxOnText ), NULL, this );
	ZMin->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZMinOnText ), NULL, this );
	ZMax->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZMaxOnText ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	ArrowScale->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ArrowBarOnScroll ), NULL, this );
	AutoLen->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::AutoLenOnCheckBox ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	XRot->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::XRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	YRot->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::YRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	ZRot->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::ZRotOnScroll ), NULL, this );
	AddSurface->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::AddSurfaceOnCheckBox ), NULL, this );
	XSurface->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::XSurfaceOnText ), NULL, this );
	YSurface->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::YSurfaceOnText ), NULL, this );
	ZSurface->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::ZSurfaceOnText ), NULL, this );
	SaveButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::SaveButtonOnButtonClick ), NULL, this );

}
