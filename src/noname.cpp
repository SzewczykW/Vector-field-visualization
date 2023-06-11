///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	MainPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	MainPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer1->Add( MainPanel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Funkcja:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );

	wxArrayString functionChoices;
	function = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, functionChoices, 0 );
	function->SetSelection( 0 );
	bSizer2->Add( function, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("a:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	a_scrollBar = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer3->Add( a_scrollBar, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("b:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	b_scrollBar = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer4->Add( b_scrollBar, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Wartości na wykresie:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer2->Add( m_staticText12, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer142;
	bSizer142 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText132 = new wxStaticText( this, wxID_ANY, wxT("x start:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText132->Wrap( -1 );
	bSizer142->Add( m_staticText132, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	x_start = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer142->Add( x_start, 0, wxALL, 5 );

	m_staticText142 = new wxStaticText( this, wxID_ANY, wxT("x stop:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText142->Wrap( -1 );
	bSizer142->Add( m_staticText142, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	x_stop = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer142->Add( x_stop, 0, wxALL, 5 );


	bSizer2->Add( bSizer142, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText131 = new wxStaticText( this, wxID_ANY, wxT("y start:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer141->Add( m_staticText131, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	y_start = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer141->Add( y_start, 0, wxALL, 5 );

	m_staticText141 = new wxStaticText( this, wxID_ANY, wxT("y stop:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	bSizer141->Add( m_staticText141, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	y_stop = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer141->Add( y_stop, 0, wxALL, 5 );


	bSizer2->Add( bSizer141, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("z start:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer14->Add( m_staticText13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	z_start = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer14->Add( z_start, 0, wxALL, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("z stop:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer14->Add( m_staticText14, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	z_stop = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	bSizer14->Add( z_stop, 0, wxALL, 5 );


	bSizer2->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Ilość odcinków:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer11->Add( m_staticText15, 0, wxALIGN_CENTER|wxALL, 5 );

	divide = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( divide, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer2->Add( bSizer11, 1, wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Długość strzałek:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer2->Add( m_staticText4, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	arrow_length = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer2->Add( arrow_length, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	auto_arrows = new wxCheckBox( this, wxID_ANY, wxT("Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	auto_arrows->SetValue(true);
	bSizer2->Add( auto_arrows, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Obrót X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer5->Add( m_staticText6, 0, wxALL, 5 );

	x_scrollBar = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer5->Add( x_scrollBar, 0, wxALL, 5 );


	bSizer2->Add( bSizer5, 1, wxALIGN_CENTER|wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Obrót Y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer6->Add( m_staticText61, 0, wxALL, 5 );

	y_scrollBar = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer6->Add( y_scrollBar, 0, wxALL, 5 );


	bSizer2->Add( bSizer6, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText62 = new wxStaticText( this, wxID_ANY, wxT("Obrót Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	bSizer7->Add( m_staticText62, 0, wxALL, 5 );

	z_scrollBar = new wxScrollBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSB_HORIZONTAL );
	bSizer7->Add( z_scrollBar, 0, wxALL, 5 );


	bSizer2->Add( bSizer7, 1, wxEXPAND, 5 );

	addSurface = new wxCheckBox( this, wxID_ANY, wxT("Dodaj Płaszczyznę"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( addSurface, 0, wxALIGN_CENTER|wxALL, 5 );

	save = new wxButton( this, wxID_ANY, wxT("Zapisz"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( save, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	MainPanel->Connect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::MainPanelOnSize ), NULL, this );
	MainPanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::MainPanelOnUpdateUI ), NULL, this );
	function->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::functionOnChoice ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	x_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::x_startOnText ), NULL, this );
	x_stop->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::x_stopOnText ), NULL, this );
	y_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::y_startOnText ), NULL, this );
	y_stop->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::y_stopOnText ), NULL, this );
	z_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::z_startOnText ), NULL, this );
	z_stop->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::z_stopOnText ), NULL, this );
	divide->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::divideOnText ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	auto_arrows->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::auto_arrowsOnCheckBox ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	addSurface->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::addSurfaceOnCheckBox ), NULL, this );
	save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::saveOnButtonClick ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	MainPanel->Disconnect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::MainPanelOnSize ), NULL, this );
	MainPanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::MainPanelOnUpdateUI ), NULL, this );
	function->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MyFrame1::functionOnChoice ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	a_scrollBar->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::a_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	b_scrollBar->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::b_scrollBarOnScroll ), NULL, this );
	x_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::x_startOnText ), NULL, this );
	x_stop->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::x_stopOnText ), NULL, this );
	y_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::y_startOnText ), NULL, this );
	y_stop->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::y_stopOnText ), NULL, this );
	z_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::z_startOnText ), NULL, this );
	z_stop->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::z_stopOnText ), NULL, this );
	divide->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::divideOnText ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	arrow_length->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::arrow_lengthOnScroll ), NULL, this );
	auto_arrows->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::auto_arrowsOnCheckBox ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	x_scrollBar->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::x_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	y_scrollBar->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::y_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	z_scrollBar->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::z_scrollBarOnScroll ), NULL, this );
	addSurface->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::addSurfaceOnCheckBox ), NULL, this );
	save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::saveOnButtonClick ), NULL, this );

}
