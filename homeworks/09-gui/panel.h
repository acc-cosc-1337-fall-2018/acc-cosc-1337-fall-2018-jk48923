#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include "tic_tac_toe_manager.h"

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
private:
	wxBoxSizer* get_top_box_sizer();
	wxBoxSizer* get_mid_box_sizer();
	wxGridSizer* get_grid_sizer(int size);
	void on_start_button_click(wxCommandEvent& event);
	void on_peg_button_click(wxCommandEvent& event);
	void on_list_box_click(wxCommandEvent& event);
	void set_button_properties(wxGridSizer* sizer);
	void set_winner_labels();

	wxRadioBox* game_type_radio;
	wxRadioBox* first_player_radio;
	wxButton* start_button;
	wxGridSizer* tic_tac_toe_grid_3;
	wxGridSizer* tic_tac_toe_grid_4;
	wxListBox* history_list_box;
	wxTextCtrl* winner_text;
	wxTextCtrl* x_winner_label;
	wxTextCtrl* o_winner_label;
	wxTextCtrl* c_winner_label;

	std::unique_ptr<TIC_TAC_TOE_MANAGER> manager;
	std::unique_ptr<TIC_TAC_TOE_BOARD> board;

};

#endif // !PANEL_H
