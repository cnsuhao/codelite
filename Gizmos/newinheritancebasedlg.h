///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __newinheritancebasedlg__
#define __newinheritancebasedlg__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/choice.h>
#include <wx/panel.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class NewIneritanceBaseDlg
///////////////////////////////////////////////////////////////////////////////
class NewIneritanceBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panel1;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrlInhertiance;
		wxButton* m_buttonMore;
		wxStaticText* m_staticText1;
		wxChoice* m_choiceAccess;
		wxStaticLine* m_staticline1;
		wxButton* m_buttonOK;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnButtonMore( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		NewIneritanceBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("New Inheritance"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~NewIneritanceBaseDlg();
	
};

#endif //__newinheritancebasedlg__
