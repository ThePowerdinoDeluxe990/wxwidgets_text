#include <wx/wx.h>

class App : public wxApp {
public:
	bool OnInit() {
		wxFrame* window = new wxFrame(NULL, wxID_ANY, "Hola mundo", wxDefaultPosition, wxSize(600, 400));
		wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

		//Add text
		wxStaticText* text = new wxStaticText(window, wxID_ANY, "Hola papu",
			wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
		//Mostrar el texto
		sizer->Add(text, 1, wxALIGN_CENTER);

		//Crear ventana
		window->SetSizer(sizer);
		window->Show();
		return true;
		}
};

wxIMPLEMENT_APP(App);