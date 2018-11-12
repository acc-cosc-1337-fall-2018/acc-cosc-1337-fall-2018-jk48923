//#include "panel.h"
//
//Panel::Panel(wxWindow * parent) : wxPanel(parent, -1)
//{
//
//	auto vbox = new wxBoxSizer(wxVERTICAL);
//	wxString choices[]{wxT("one"), wxT("two") };
//
//
//	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
//	radio_box = new wxRadioBox(this, -1, wxT("Choices"), wxDefaultPosition, wxDefaultSize,
//										WXSIZEOF(choices), choices, 1, wxRA_SPECIFY_COLS);
//
//	list_box = new wxListBox(this, -1, wxPoint(-1, -1), wxSize(-1, -1));
//
//	for (auto option : list_options)
//	{
//		list_box->Append(option);
//	}
//
//	list_box->Bind(wxEVT_LISTBOX, &Panel::OnList, this);
//
//	//list_box->Append("item 1");
//	//list_box->Append("item 2");
//	//list_box->Bind(wxEVT_LISTBOX, &Panel::OnList, this);
//
//	hbox0->Add(list_box);
//
//	hbox0->Add(radio_box);
//
//	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
//	auto m_usernameLabel = new wxStaticText(this, wxID_ANY, wxT("Name: "),
//		wxDefaultPosition, wxSize(70, -1));
//	hbox1->Add(m_usernameLabel, 0);
//
//	auto hbox2 = new wxBoxSizer(wxHORIZONTAL);
//	// Create a button
//	auto m_buttonAction = new wxButton(this, -1, wxT("Do something"));
//
//	// Enumeration - Helps clarify code
//	m_buttonAction->Bind(wxEVT_BUTTON, &Panel::OnDisplay, this);
//
//	hbox2->Add(m_buttonAction);
//
//	m_nameEntry = new wxTextCtrl(this, wxID_ANY);
//	m_nameEntry->SetLabel(my_class.get_name());
//	hbox1->Add(m_nameEntry, 1);
//
//
//	// Alignments
//	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
//	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
//	vbox->Add(hbox2, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);
//	SetSizer(vbox);
//}
//
////when button is clicked this function will execute
//void Panel::OnButtonClick(wxCommandEvent & event)
//{
//	//wxMessageBox("Button clicked   ",
//	//	"Hello Textbox", wxOK | wxICON_INFORMATION);
//
//	//wxMessageBox("Hello " + m_nameEntry->GetValue(),
//	//	"Hello TextBox", wxOK | wxICON_INFORMATION)
//
//	my_class.set_name(m_nameEntry->GetValue().ToStdString());
//
//	wxMessageBox("My class value " + my_class.get_name(),
//		"My class data", wxOK | wxICON_INFORMATION);
//
//	// use this part for the assignment and homework down the road
//	if (radio_box->GetSelection() == 0)
//	{
//		wxMessageBox("Radio option: 1",
//			"Hellow Textbox", wxOK | wxICON_INFORMATION);
//	}
//	else if (radio_box->GetSelection() == 1)
//	{
//		wxMessageBox("Radio option: 2",
//			"Hello Textbox", wxOK | wxICON_INFORMATION);
//	}
//
//}
//
//void Panel::OnList(wxCommandEvent & event)
//{
//	// Display current index of list box
//	wxMessageBox(list_options[list_box->GetSelection()],
//		"ListBox", wxOK | wxICON_INFORMATION);
//
//
//
//	//if (list_box->GetSelection() == 0)
//	//{
//	//	wxMessageBox("Item List: 0",
//	//		"ListBox", wxOK | wxICON_INFORMATION);
//	//}
//}
