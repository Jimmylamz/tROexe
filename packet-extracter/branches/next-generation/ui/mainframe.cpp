// -*- C++ -*- generated by wxGlade 0.4.1 on Wed Apr 12 20:45:13 2006

#include "mainframe.h"


MainFrame::MainFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxICONIZE|wxCAPTION|wxMINIMIZE|wxCLOSE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU)
{
    // begin wxGlade: MainFrame::MainFrame
    panel_1 = new wxPanel(this, -1);
    label_1 = new wxStaticText(panel_1, -1, wxT("Select your RO client's .exe file:"));
    fileInput = new wxTextCtrl(panel_1, -1, wxT(""));
    browseButton = new wxButton(panel_1, -1, wxT(" ... "), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    progress = new wxGauge(panel_1, -1, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH);
    aboutButton = new wxButton(panel_1, -1, wxT("About"));
    extractButton = new wxButton(panel_1, -1, wxT("Extract"));
    cancelButton = new wxButton(panel_1, -1, wxT("Cancel"));

    set_properties();
    do_layout();
    // end wxGlade
}


void MainFrame::set_properties()
{
    // begin wxGlade: MainFrame::set_properties
    SetTitle(wxT("OpenKore Packet Length Extractor"));
    fileInput->SetFocus();
    extractButton->SetDefault();
    // end wxGlade
}


void MainFrame::do_layout()
{
    // begin wxGlade: MainFrame::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_4 = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* sizer_3 = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_2 = new wxBoxSizer(wxHORIZONTAL);
    sizer_4->Add(label_1, 0, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, 8);
    sizer_2->Add(fileInput, 1, wxLEFT|wxTOP|wxBOTTOM|wxALIGN_CENTER_VERTICAL, 8);
    sizer_2->Add(browseButton, 0, wxALL|wxALIGN_CENTER_VERTICAL, 8);
    sizer_4->Add(sizer_2, 0, wxEXPAND, 0);
    sizer_4->Add(progress, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND|wxADJUST_MINSIZE, 8);
    sizer_3->Add(aboutButton, 0, wxALL, 8);
    sizer_3->Add(20, 20, 1, wxEXPAND|wxADJUST_MINSIZE, 0);
    sizer_3->Add(extractButton, 0, wxLEFT|wxTOP|wxBOTTOM, 8);
    sizer_3->Add(cancelButton, 0, wxALL, 8);
    sizer_4->Add(sizer_3, 0, wxEXPAND, 0);
    panel_1->SetAutoLayout(true);
    panel_1->SetSizer(sizer_4);
    sizer_4->Fit(panel_1);
    sizer_4->SetSizeHints(panel_1);
    sizer_1->Add(panel_1, 1, wxEXPAND, 0);
    SetAutoLayout(true);
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    sizer_1->SetSizeHints(this);
    Layout();
    Centre();
    // end wxGlade
}

