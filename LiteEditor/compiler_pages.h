///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __compiler_pages__
#define __compiler_pages__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/listctrl.h>
#include <wx/button.h>
#include <wx/checkbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CompilerPatternsBase
///////////////////////////////////////////////////////////////////////////////
class CompilerPatternsBase : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText161;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textErrorPattern;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textErrorFileIndex;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textErrorLineNumber;
		wxStaticLine* m_staticline5;
		wxStaticText* m_staticText17;
		wxStaticText* m_staticText51;
		wxTextCtrl* m_textWarnPattern;
		wxStaticText* m_staticText61;
		wxTextCtrl* m_textWarnFileIndex;
		wxStaticText* m_staticText71;
		wxTextCtrl* m_textWarnLineNumber;
	
	public:
		CompilerPatternsBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~CompilerPatternsBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CompilerToolsBase
///////////////////////////////////////////////////////////////////////////////
class CompilerToolsBase : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_panel2;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCompilerName;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textLinkerName;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textSOLinker;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textArchiveTool;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textResourceCmp;
		wxStaticText* m_staticText20;
		wxTextCtrl* m_textCtrlPathVariable;
	
	public:
		CompilerToolsBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL );
		~CompilerToolsBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CompilerSwitchesBase
///////////////////////////////////////////////////////////////////////////////
class CompilerSwitchesBase : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_panel3;
		wxStaticText* m_staticText8;
		wxListCtrl* m_listSwitches;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnItemActivated( wxListEvent& event ){ event.Skip(); }
		virtual void OnItemSelected( wxListEvent& event ){ event.Skip(); }
		
	
	public:
		CompilerSwitchesBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 802,596 ), long style = wxTAB_TRAVERSAL );
		~CompilerSwitchesBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CompilerFileTypesBase
///////////////////////////////////////////////////////////////////////////////
class CompilerFileTypesBase : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_panel4;
		wxStaticText* m_staticText23;
		wxListCtrl* m_listCtrlFileTypes;
		wxButton* m_buttonNewFileType;
		wxButton* m_buttonDeleteFileType;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnFileTypeActivated( wxListEvent& event ){ event.Skip(); }
		virtual void OnFileTypeDeSelected( wxListEvent& event ){ event.Skip(); }
		virtual void OnFileTypeSelected( wxListEvent& event ){ event.Skip(); }
		virtual void OnNewFileType( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnDeleteFileType( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		CompilerFileTypesBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~CompilerFileTypesBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CompilerAdvanceBase
///////////////////////////////////////////////////////////////////////////////
class CompilerAdvanceBase : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_panel1;
		wxCheckBox* m_checkBoxGenerateDependenciesFiles;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText141;
		wxTextCtrl* m_textCtrlGlobalIncludePath;
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textCtrlGlobalLibPath;
		wxStaticLine* m_staticline31;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textObjectExtension;
		wxStaticText* m_staticText24;
		wxTextCtrl* m_textDependExtension;
		wxStaticText* m_staticText25;
		wxTextCtrl* m_textPreprocessExtension;
	
	public:
		CompilerAdvanceBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL );
		~CompilerAdvanceBase();
	
};

#endif //__compiler_pages__
