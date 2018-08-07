// WebBrowser2.cpp : Defines the initialization routines for the DLL.
//
//////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "WebBrowser2.h"

#include "ViewHtml.h"
#include "lib2.h"
#include "fnshare.h"
#include "krnllib.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//
//	Note!
//
//		If this DLL is dynamically linked against the MFC
//		DLLs, any functions exported from this DLL which
//		call into MFC must have the AFX_MANAGE_STATE macro
//		added at the very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

/////////////////////////////////////////////////////////////////////////////
// CWebBrowser2App

BEGIN_MESSAGE_MAP(CWebBrowser2App, CWinApp)
	//{{AFX_MSG_MAP(CWebBrowser2App)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWebBrowser2App construction

CWebBrowser2App::CWebBrowser2App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CWebBrowser2App object

#ifndef __E_STATIC_LIB

CWebBrowser2App theApp;

#endif
/////////////////////////////////////////////////////////////////////////////

INT g_nLastNotifyResult;
PFN_NOTIFY_SYS g_fnNotifySys = NULL;

INT WINAPI NotifySys (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
	ASSERT (g_fnNotifySys != NULL);
	if (g_fnNotifySys != NULL)
		return g_nLastNotifyResult = g_fnNotifySys (nMsg, dwParam1, dwParam2);
	else
		return g_nLastNotifyResult = 0;
}

#include "fnshare.cpp"
/////////////////////////


#ifndef __E_STATIC_LIB

LIB_DATA_TYPE_ELEMENT g_OLECMDID [] =
{
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWPAGEACTIONMENU"),
        /*m_szEgName*/          _T("OLECMDID_SHOWPAGEACTIONMENU"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          59,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_FOCUSVIEWCONTROLSQUERY"),
        /*m_szEgName*/          _T("OLECMDID_FOCUSVIEWCONTROLSQUERY"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          58,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_FOCUSVIEWCONTROLS"),
        /*m_szEgName*/          _T("OLECMDID_FOCUSVIEWCONTROLS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          57,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PAGEACTIONUIQUERY"),
        /*m_szEgName*/          _T("OLECMDID_PAGEACTIONUIQUERY"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          56,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PAGEACTIONBLOCKED"),
        /*m_szEgName*/          _T("OLECMDID_PAGEACTIONBLOCKED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          55,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_GETPRINTTEMPLATE"),
        /*m_szEgName*/          _T("OLECMDID_GETPRINTTEMPLATE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          52,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETPRINTTEMPLATE"),
        /*m_szEgName*/          _T("OLECMDID_SETPRINTTEMPLATE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          51,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PRINTPREVIEW2"),
        /*m_szEgName*/          _T("OLECMDID_PRINTPREVIEW2"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          50,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PRINT2"),
        /*m_szEgName*/          _T("OLECMDID_PRINT2"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          49,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_UPDATEPAGESTATUS"),
        /*m_szEgName*/          _T("OLECMDID_UPDATEPAGESTATUS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          48,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_DONTDOWNLOADCSS"),
        /*m_szEgName*/          _T("OLECMDID_DONTDOWNLOADCSS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          47,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_ALLOWUILESSSAVEAS"),
        /*m_szEgName*/          _T("OLECMDID_ALLOWUILESSSAVEAS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          46,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_CLOSE"),
        /*m_szEgName*/          _T("OLECMDID_CLOSE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          45,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWPRINT"),
        /*m_szEgName*/          _T("OLECMDID_SHOWPRINT"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          44,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWPAGESETUP"),
        /*m_szEgName*/          _T("OLECMDID_SHOWPAGESETUP"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          43,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWFIND"),
        /*m_szEgName*/          _T("OLECMDID_SHOWFIND"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          42,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWMESSAGE"),
        /*m_szEgName*/          _T("OLECMDID_SHOWMESSAGE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          41,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SHOWSCRIPTERROR"),
        /*m_szEgName*/          _T("OLECMDID_SHOWSCRIPTERROR"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          40,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PREREFRESH"),
        /*m_szEgName*/          _T("OLECMDID_PREREFRESH"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          39,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PROPERTYBAG2"),
        /*m_szEgName*/          _T("OLECMDID_PROPERTYBAG2"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          38,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_ONUNLOAD"),
        /*m_szEgName*/          _T("OLECMDID_ONUNLOAD"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          37,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_ENABLE_INTERACTION"),
        /*m_szEgName*/          _T("OLECMDID_ENABLE_INTERACTION"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          36,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_HTTPEQUIV_DONE"),
        /*m_szEgName*/          _T("OLECMDID_HTTPEQUIV_DONE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          35,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_HTTPEQUIV"),
        /*m_szEgName*/          _T("OLECMDID_HTTPEQUIV"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          34,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_DELETE"),
        /*m_szEgName*/          _T("OLECMDID_DELETE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          33,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_FIND"),
        /*m_szEgName*/          _T("OLECMDID_FIND"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          32,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_ONTOOLBARACTIVATED"),
        /*m_szEgName*/          _T("OLECMDID_ONTOOLBARACTIVATED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          31,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_STOPDOWNLOAD"),
        /*m_szEgName*/          _T("OLECMDID_STOPDOWNLOAD"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          30,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETDOWNLOADSTATE"),
        /*m_szEgName*/          _T("OLECMDID_SETDOWNLOADSTATE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          29,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETTITLE"),
        /*m_szEgName*/          _T("OLECMDID_SETTITLE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          28,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETPROGRESSTEXT"),
        /*m_szEgName*/          _T("OLECMDID_SETPROGRESSTEXT"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          27,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETPROGRESSPOS"),
        /*m_szEgName*/          _T("OLECMDID_SETPROGRESSPOS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          26,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SETPROGRESSMAX"),
        /*m_szEgName*/          _T("OLECMDID_SETPROGRESSMAX"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          25,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_HIDETOOLBARS"),
        /*m_szEgName*/          _T("OLECMDID_HIDETOOLBARS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          24,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_STOP"),
        /*m_szEgName*/          _T("OLECMDID_STOP"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          23,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_REFRESH"),
        /*m_szEgName*/          _T("OLECMDID_REFRESH"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          22,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_UPDATECOMMANDS"),
        /*m_szEgName*/          _T("OLECMDID_UPDATECOMMANDS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          21,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_GETZOOMRANGE"),
        /*m_szEgName*/          _T("OLECMDID_GETZOOMRANGE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          20,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_ZOOM"),
        /*m_szEgName*/          _T("OLECMDID_ZOOM"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          19,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_CLEARSELECTION"),
        /*m_szEgName*/          _T("OLECMDID_CLEARSELECTION"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          18,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SELECTALL"),
        /*m_szEgName*/          _T("OLECMDID_SELECTALL"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          17,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_REDO"),
        /*m_szEgName*/          _T("OLECMDID_REDO"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          16,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_UNDO"),
        /*m_szEgName*/          _T("OLECMDID_UNDO"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          15,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PASTESPECIAL"),
        /*m_szEgName*/          _T("OLECMDID_PASTESPECIAL"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          14,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PASTE"),
        /*m_szEgName*/          _T("OLECMDID_PASTE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          13,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_COPY"),
        /*m_szEgName*/          _T("OLECMDID_COPY"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          12,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_CUT"),
        /*m_szEgName*/          _T("OLECMDID_CUT"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          11,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PROPERTIES"),
        /*m_szEgName*/          _T("OLECMDID_PROPERTIES"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          10,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SPELL"),
        /*m_szEgName*/          _T("OLECMDID_SPELL"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          9,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PAGESETUP"),
        /*m_szEgName*/          _T("OLECMDID_PAGESETUP"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          8,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PRINTPREVIEW"),
        /*m_szEgName*/          _T("OLECMDID_PRINTPREVIEW"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          7,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_PRINT"),
        /*m_szEgName*/          _T("OLECMDID_PRINT"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          6,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SAVECOPYAS"),
        /*m_szEgName*/          _T("OLECMDID_SAVECOPYAS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          5,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SAVEAS"),
        /*m_szEgName*/          _T("OLECMDID_SAVEAS"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          4,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_SAVE"),
        /*m_szEgName*/          _T("OLECMDID_SAVE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          3,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_NEW"),
        /*m_szEgName*/          _T("OLECMDID_NEW"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          2,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDID_OPEN"),
        /*m_szEgName*/          _T("OLECMDID_OPEN"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          1,
        }, 

};

    LIB_DATA_TYPE_ELEMENT g_OLECMDF [] =
    {
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_DEFHIDEONCTXTMENU"),
        /*m_szEgName*/          _T("OLECMDF_DEFHIDEONCTXTMENU"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          32,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_INVISIBLE"),
        /*m_szEgName*/          _T("OLECMDF_INVISIBLE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          16,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_NINCHED"),
        /*m_szEgName*/          _T("OLECMDF_NINCHED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          8,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_LATCHED"),
        /*m_szEgName*/          _T("OLECMDF_LATCHED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          4,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_ENABLED"),
        /*m_szEgName*/          _T("OLECMDF_ENABLED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          2,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDF_SUPPORTED"),
        /*m_szEgName*/          _T("OLECMDF_SUPPORTED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          1,
        }, 
	};
    LIB_DATA_TYPE_ELEMENT g_OLECMDEXECOPT [] =
    {
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDEXECOPT_SHOWHELP"),
        /*m_szEgName*/          _T("OLECMDEXECOPT_SHOWHELP"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          3,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDEXECOPT_DONTPROMPTUSER"),
        /*m_szEgName*/          _T("OLECMDEXECOPT_DONTPROMPTUSER"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          2,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDEXECOPT_PROMPTUSER"),
        /*m_szEgName*/          _T("OLECMDEXECOPT_PROMPTUSER"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          1,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("OLECMDEXECOPT_DODEFAULT"),
        /*m_szEgName*/          _T("OLECMDEXECOPT_DODEFAULT"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          0,
        }, 

	};
    LIB_DATA_TYPE_ELEMENT g_tagREADYSTATE [] =
    {
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("READYSTATE_COMPLETE"),
        /*m_szEgName*/          _T("READYSTATE_COMPLETE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          4,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("READYSTATE_INTERACTIVE"),
        /*m_szEgName*/          _T("READYSTATE_INTERACTIVE"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          3,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("READYSTATE_LOADED"),
        /*m_szEgName*/          _T("READYSTATE_LOADED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          2,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("READYSTATE_LOADING"),
        /*m_szEgName*/          _T("READYSTATE_LOADING"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          1,
        }, 
        {
        /*m_dtType*/            SDT_INT,
        /*m_pArySpec*/          NULL,
        /*m_szName*/            _T("READYSTATE_UNINITIALIZED"),
        /*m_szEgName*/          _T("READYSTATE_UNINITIALIZED"),
        /*m_szExplain*/         _T(""),
        /*m_dwState*/           LES_HAS_DEFAULT_VALUE,
        /*m_nDefault*/          0,
        }, 

	};
/////////////////////////////////////////////////////////////////////////////


INT s_nHtmlViewerElementCmdIndex [] =
{
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22
};

extern UNIT_PROPERTY g_HtmlViewerProperty [];
extern INT g_HtmlViewerPropertyCount;
extern EVENT_INFO2 g_HtmlViewerEvent [];
extern INT g_HtmlViewerEventCount;

// ����Ķ���˳����Բ��ɸĶ���
static LIB_DATA_TYPE_INFO s_DataType[] = 
{
	{
/*m_szName*/					_WT("�����������"),
/*m_szEgName*/					_WT("WebBrowser"),
/*m_szExplain*/					_WT("�ṩ��HTMLҳ������֧��"),
/*m_nCmdCount*/					sizeof (s_nHtmlViewerElementCmdIndex) / sizeof (s_nHtmlViewerElementCmdIndex [0]),
/*m_pnCmdsIndex*/				s_nHtmlViewerElementCmdIndex,
/*m_dwState*/					LDT_WIN_UNIT|_LIB_OS(__OS_WIN),
/*m_dwUnitBmpID*/				IDB_BITMAP1,
/*m_nEventCount*/				g_HtmlViewerEventCount,
/*m_pEventBegin*/				g_HtmlViewerEvent,
/*m_nPropertyCount*/			g_HtmlViewerPropertyCount,
/*m_pPropertyBegin*/			g_HtmlViewerProperty,
/*m_pfnGetInterface*/			webbrowser2_GetInterface_WebBrowser,
/*m_nElementCount*/				0,
/*m_pElementBegin*/				NULL,
	},
		{
			/*m_szName*/                _T("OLECMDID"),
 			/*m_szEgName*/              _T("OLECMDID"),
			/*m_szExplain*/             _T("ִ��������õ�����"),
 			/*m_nCmdCount*/             0,      // û�г�Ա����
			/*m_pnCmdsIndex*/           NULL,
			/*m_dwState*/               (1 << 22)|_LIB_OS(__OS_WIN),
			/*m_dwUnitBmpID*/           0,
			/*m_nEventCount*/           0,      // ����Ϊ 0 ��
			/*m_pEventBegin*/           NULL,
			/*m_nPropertyCount*/        0,      // ����Ϊ 0 ��
			/*m_pPropertyBegin*/        NULL,
			/*m_pfnGetInterface*/       NULL,   // ����Ϊ NULL ��
			/*m_nElementCount*/         sizeof (g_OLECMDID) / sizeof (g_OLECMDID [0]),
			/*m_pElementBegin*/         g_OLECMDID,
		},
		{
			/*m_szName*/                _T("OLECMDF"),
 			/*m_szEgName*/              _T("OLECMDF"),
			/*m_szExplain*/             _T("ִ��������õ�����"),
 			/*m_nCmdCount*/             0,      // û�г�Ա����
			/*m_pnCmdsIndex*/           NULL,
			/*m_dwState*/               (1 << 22)|_LIB_OS(__OS_WIN),
			/*m_dwUnitBmpID*/           0,
			/*m_nEventCount*/           0,      // ����Ϊ 0 ��
			/*m_pEventBegin*/           NULL,
			/*m_nPropertyCount*/        0,      // ����Ϊ 0 ��
			/*m_pPropertyBegin*/        NULL,
			/*m_pfnGetInterface*/       NULL,   // ����Ϊ NULL ��
			/*m_nElementCount*/         sizeof (g_OLECMDF) / sizeof (g_OLECMDF [0]),
			/*m_pElementBegin*/         g_OLECMDF,
		},
		{
			/*m_szName*/                _T("OLECMDEXECOPT"),
 			/*m_szEgName*/              _T("OLECMDEXECOPT"),
			/*m_szExplain*/             _T("ִ��������õ�����"),
 			/*m_nCmdCount*/             0,      // û�г�Ա����
			/*m_pnCmdsIndex*/           NULL,
			/*m_dwState*/               (1 << 22)|_LIB_OS(__OS_WIN),
			/*m_dwUnitBmpID*/           0,
			/*m_nEventCount*/           0,      // ����Ϊ 0 ��
			/*m_pEventBegin*/           NULL,
			/*m_nPropertyCount*/        0,      // ����Ϊ 0 ��
			/*m_pPropertyBegin*/        NULL,
			/*m_pfnGetInterface*/       NULL,   // ����Ϊ NULL ��
			/*m_nElementCount*/         sizeof (g_OLECMDEXECOPT) / sizeof (g_OLECMDEXECOPT [0]),
			/*m_pElementBegin*/         g_OLECMDEXECOPT,
		},
		{
			/*m_szName*/                _T("tagREADYSTATE"),
 			/*m_szEgName*/              _T("tagREADYSTATE"),
			/*m_szExplain*/             _T("����״̬�����صĳ���ֵ"),
 			/*m_nCmdCount*/             0,      // û�г�Ա����
			/*m_pnCmdsIndex*/           NULL,
			/*m_dwState*/               (1 << 22)|_LIB_OS(__OS_WIN),
			/*m_dwUnitBmpID*/           0,
			/*m_nEventCount*/           0,      // ����Ϊ 0 ��
			/*m_pEventBegin*/           NULL,
			/*m_nPropertyCount*/        0,      // ����Ϊ 0 ��
			/*m_pPropertyBegin*/        NULL,
			/*m_pfnGetInterface*/       NULL,   // ����Ϊ NULL ��
			/*m_nElementCount*/         sizeof (g_tagREADYSTATE) / sizeof (g_tagREADYSTATE [0]),
			/*m_pElementBegin*/         g_tagREADYSTATE,
		},
};
///


///////////////////////////////////

//*** �������Ϣ:

ARG_INFO s_ArgInfo[] =
{
//****** ��ת	**	0
	{
/*name*/	_WT("��ҳ��ַ"),
/*explain*/	_WT("���λ�ڻ������򱾻��ϵĵ�ַ"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_TEXT,
/*default*/	0,
/*state*/	NULL,
	},
//****** ��־	**	1
	{
/*name*/	_WT("���"),
/*explain*/	_WT("�����ҳ��صı��"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** Ŀ�괰����	**	2
	{
/*name*/	_WT("Ŀ�괰������"),
/*explain*/	_WT("Ϊ��Ҫ��ת����Ŀ�괰������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_TEXT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** Ŀ�괰����	**	3
	{
/*name*/	_WT("����˵��"),
/*explain*/	_WT("ΪPOST����Ͷ�����ݵı������͡�����Content-Type: application/x-www-form-urlencoded"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_TEXT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** Ŀ�괰����	**	4
	{
/*name*/	_WT("����"),
/*explain*/	_WT("Ϊ��Ҫ��ת����Ŀ�괰������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	DTP_COM_OBJECT,
/*default*/	0,
/*state*/	NULL,
	},
//****** ִ������	**	5
	{
/*name*/	_WT("��ִ�е�����"),
/*explain*/	_WT("ָ����ִ����������ͣ�Ϊö�ٳ���OLECMDID��ֵ֮һ"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	NULL,
	},
//****** ����ҳ�ӿ�	**	6
	{
/*name*/	_WT("�����"),
/*explain*/	_WT("ָ���������Ϊ���³���ֵ֮һ�� "
			"0: #Ĭ�ϣ� "
			"1: #��ʾ�û��� "
			"2: #����ʾ�û��� "
			"3: #��ʾ������ "),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** ����	**	7
	{
/*name*/	_WT("����"),
/*explain*/	_WT("Ϊ������������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	DTP_VARIANT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** ����	**	8
	{
/*name*/	_WT("���"),
/*explain*/	_WT("Ϊ�����������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	DTP_VARIANT,
/*default*/	0,
/*state*/	AS_DEFAULT_VALUE_IS_EMPTY,
	},
//****** ����	**	9
	{
/*name*/	_WT("��������"),
/*explain*/	_WT("���趨ֵ����������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_TEXT,
/*default*/	0,
/*state*/	NULL,
	},
//****** ����	**	10
	{
/*name*/	_WT("����ֵ"),
/*explain*/	_WT("���趨������ֵ"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	DTP_VARIANT,
/*default*/	0,
/*state*/	NULL,
	},
//****** ִ������	**	11
	{
/*name*/	_WT("���뷽ʽ"),
/*explain*/	_WT("0���ޣ�1������룻2�����У�3���Ҷ��룻4����Ŀ�б�5�������б�6������������7������������"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	NULL,
	},//****** ִ������	**	12
	{
/*name*/	_WT("������"),
/*explain*/	_WT("0�����壻1��б�壻2���»��ߣ�3��ɾ���ߣ�4���ϱꣻ5���±ꣻ"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	NULL,
	},//****** ִ������	**	13
	{
/*name*/	_WT("HTML����"),
/*explain*/	_WT("�������HTML���롣"),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_TEXT,
/*default*/	0,
/*state*/	NULL,
	},//****** ִ������	**	14
	{
/*name*/	_WT("�����"),
/*explain*/	_WT("��������ĳ���ֵ��VC��ͷ�ļ�MsHtmcid.h�ﶨ�塣�Ƽ��㵽΢����վ���������ļ��Ի�ö�IE6�����֧�֡� "),
/*bmp inx*/	0,
/*bmp num*/	0,
/*type*/	SDT_INT,
/*default*/	0,
/*state*/	NULL,
	},
};

static CMD_INFO s_CmdInfo[] =
{
/////////////////////////////////// ���ı������

//****** ��ת����Ա��	** 0
	{
/*ccname*/	_WT("���"),
/*egname*/	_WT("Navigate"),
/*explain*/	_WT("�򿪻��������߱�����ָ��λ�ô����ĵ�"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/4,
/*arg lp*/	s_ArgInfo,
	},
//****** ��ת����Ա��	** 1
	{
/*ccname*/	_WT("ȡ���������"),
/*egname*/	_WT("GetApplication"),
/*explain*/	_WT(""),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[4],
	},
//****** ��ת����Ա��	** 2
	{
/*ccname*/	_WT("ȡ��ҳ�ĵ�����"),
/*egname*/	_WT("GetHtmlDocument"),
/*explain*/	_WT(""),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[4],
	},
//****** ��ת����Ա��	** 3
	{
/*ccname*/	_WT("ȡ��������"),
/*egname*/	_WT("GetContainer"),
/*explain*/	_WT(""),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[4],
	},
//****** ��ת����Ա��	** 4
	{
/*ccname*/	_WT("ǰ��"),
/*egname*/	_WT("GoForward"),
/*explain*/	_WT("����ʷ�б����һҳ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 5
	{
/*ccname*/	_WT("����"),
/*egname*/	_WT("GoBack"),
/*explain*/	_WT("����ʷ�б��ǰһҳ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 6
	{
/*ccname*/	_WT("����ҳ"),
/*egname*/	_WT("GoHome"),
/*explain*/	_WT("��IE�����õ���ҳ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 7
	{
/*ccname*/	_WT("������ҳ"),
/*egname*/	_WT("GoSearch"),
/*explain*/	_WT("����ǰ����ҳ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 8
	{
/*ccname*/	_WT("ˢ��"),
/*egname*/	_WT("Refresh"),
/*explain*/	_WT("���ص�ǰ�ļ�"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 9
	{
/*ccname*/	_WT("ֹͣ"),
/*egname*/	_WT("Stop"),
/*explain*/	_WT("ֹͣ���ļ�"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ִ�������Ա��	** 10
	{
/*ccname*/	_WT("ִ������"),
/*egname*/	_WT("ExecWB"),
/*explain*/	_WT("ִ��ָ�������������"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/4,
/*arg lp*/	&s_ArgInfo[5],
	},
//****** ִ�������Ա��	** 11
	{
/*ccname*/	_WT("��ѯ����״̬"),
/*egname*/	_WT("QueryStatusWB"),
/*explain*/	_WT("��ѯ����������Ϣ�������Ƿ�֧�֡�"
		"����ֵΪ���¸�ֵ����ϣ� "
			"1: #֧�֣� "
			"2: #���� "
			"4: #ͣ�ã� "
			"8: #NINCHED�� "
			"16: #�����ӣ� "),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_INT,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[5],
	},
//****** ��ת����Ա��	** 12
	{
/*ccname*/	_WT("������ֵ"),
/*egname*/	_WT("PutProperty"),
/*explain*/	_WT("������������������ֵ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		_SDT_NULL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/2,
/*arg lp*/	&s_ArgInfo[9],
	},
//****** ִ�������Ա��	** 13
	{
/*ccname*/	_WT("ȡ����ֵ"),
/*egname*/	_WT("GetProperty"),
/*explain*/	_WT("ȡ��������������ֵ"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		DTP_VARIANT,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[9],
	},
//****** ��ת����Ա��	** 14
	{
/*ccname*/	_WT("��ѡ����ʽ"),
/*egname*/	_WT("JustifyFormat"),
/*explain*/	_WT("�ڱ༭ģʽ�£����õ�ǰѡ��������ʾ��ʽ���ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[11],
	},//****** ��ת����Ա��	** 15
	{
/*ccname*/	_WT("ȡ��ѡ��"),
/*egname*/	_WT("Unselect"),
/*explain*/	_WT("�ڱ༭ģʽ�£������ǰѡ������ѡ��״̬���ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},//****** ��ת����Ա��	** 16
	{
/*ccname*/	_WT("�����ĵ�"),
/*egname*/	_WT("SaveAs"),
/*explain*/	_WT("����ǰHTMLҳ�汣��Ϊ�ļ����ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},//****** ��ת����Ա��	** 17
	{
/*ccname*/	_WT("���븲���л�"),
/*egname*/	_WT("OverWrite"),
/*explain*/	_WT("�ڱ༭ģʽ�£����в���͸�������״̬���л����ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},
//****** ��ת����Ա��	** 18
	{
/*ccname*/	_WT("ת��������"),
/*egname*/	_WT("SetFontStyle"),
/*explain*/	_WT("�ڱ༭ģʽ�£��л�ָ���������񣬺�ԭ�����෴���ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[12],
	},//****** ��ת����Ա��	** 19
	{
/*ccname*/	_WT("��������"),
/*egname*/	_WT("CreateLink"),
/*explain*/	_WT("�ڱ༭ģʽ�£���ʾһ���Ի��������û�ָ��ҪΪ��ǰѡ��������ĳ������ӡ��ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},//****** ��ת����Ա��	** 20
	{
/*ccname*/	_WT("ɾ������"),
/*egname*/	_WT("Unlink"),
/*explain*/	_WT("�ڱ༭ģʽ�£��ӵ�ǰѡ������ɾ��ȫ���������ӡ��ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/0,
/*arg lp*/	NULL,
	},//****** ��ת����Ա��	** 21
	{
/*ccname*/	_WT("�������"),
/*egname*/	_WT("pasteHTML"),
/*explain*/	_WT("�ڱ༭ģʽ�£���ǰѡ����������ָ����HTML���롣�ɹ������档"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_BOOL,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[13],
	},
//****** ִ�������Ա��	** 22
	{
/*ccname*/	_WT("ִ����ҳ����"),
/*egname*/	_WT("ExecCommand"),
/*explain*/	_WT("ִ��ָ������ҳ�������ִ�д�ӡ���鿴Դ�ļ������ҡ��򿪡�Internetѡ�������ӵ��ղؼС��ȵȲ�����"),
/*category*/-1,
/*state*/	_CMD_OS(__OS_WIN),
/*ret*/		SDT_INT,
/*reserved*/0,
/*level*/	LVL_SIMPLE,
/*bmp inx*/	0,
/*bmp num*/	0,
/*ArgCount*/1,
/*arg lp*/	&s_ArgInfo[14],
	},
};

#endif

extern "C"
void webbrowser2_fnNavigate (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	LPCTSTR lpszTargetFrameName=NULL;
	LPCTSTR lpszHeaders=NULL;
	if(pArgInf [3].m_dtDataType !=_SDT_NULL)
		lpszTargetFrameName=pArgInf [3].m_pText;
	if(pArgInf [4].m_dtDataType !=_SDT_NULL)
		lpszHeaders=pArgInf [4].m_pText;

	pUnit->Navigate ((LPCTSTR)pArgInf [1].m_pText,pArgInf [2].m_int,lpszTargetFrameName,lpszHeaders);
}

extern "C"
void webbrowser2_fnGetApplication (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);
	LPDISPATCH pDis=*(LPDISPATCH*)pArgInf [1].m_ppCompoundData;
	if(pDis)
		pDis->Release();

	*(LPDISPATCH*)pArgInf [1].m_ppCompoundData=pUnit->GetApplication();

}

extern "C"
void webbrowser2_fnGetHtmlDocument (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);
	LPDISPATCH pDis=*(LPDISPATCH*)pArgInf [1].m_ppCompoundData;
	if(pDis)
		pDis->Release();
	*(LPDISPATCH*)pArgInf [1].m_ppCompoundData=pUnit->GetHtmlDocument();

}

extern "C"
void webbrowser2_fnGetContainer (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);
	LPDISPATCH pDis=*(LPDISPATCH*)pArgInf [1].m_ppCompoundData;
	if(pDis)
		pDis->Release();
	*(LPDISPATCH*)pArgInf [1].m_ppCompoundData=pUnit->GetContainer ();

}

extern "C"
void webbrowser2_fnGoForward (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);


	pUnit->GoForward();
}

extern "C"
void webbrowser2_fnGoBack (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pUnit->GoBack();
}

extern "C"
void webbrowser2_fnGoHome (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pUnit->GoHome();
}

extern "C"
void webbrowser2_fnGoSearch (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pUnit->GoSearch();
}

extern "C"
void webbrowser2_fnRefresh (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pUnit->Refresh();
}

extern "C"
void webbrowser2_fnStop (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pUnit->Stop();
}

extern "C"
void webbrowser2_fnExecute (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);


	VARIANT* pvtIn=NULL;//=(VARIANT)pArgInf [3].m_pCompoundData;

	VARIANT* pvtOut=NULL;//=(VARIANT)pArgInf [4].m_pCompoundData;

	if(pArgInf [3].m_dtDataType !=_SDT_NULL)
		pvtIn=(VARIANT*)pArgInf [3].m_pCompoundData;

	if(pArgInf [4].m_dtDataType !=_SDT_NULL)
		pvtOut=(VARIANT*)pArgInf [4].m_pCompoundData;

//		VariantClear(&pvtOut);
	//pvtOut.vt=VT_EMPTY;
/*
  	LPDISPATCH lpDisp =pUnit ->GetHtmlDocument();


	if (lpDisp != NULL) 
	{
		LPOLECOMMANDTARGET lpTarget;
 		if (SUCCEEDED(lpDisp->QueryInterface(IID_IOleCommandTarget,
                    (LPVOID*) &lpTarget))) {
  			lpTarget->Exec(NULL, (OLECMDID)pArgInf [1].m_int, (OLECMDEXECOPT)pArgInf [2].m_int, &pvtIn,&pvtOut);
  			lpTarget->Release();
 		}
 		lpDisp->Release();
 	}*/
	pUnit->ExecWB((OLECMDID)pArgInf [1].m_int,(OLECMDEXECOPT)pArgInf [2].m_int,pvtIn,pvtOut);


}

extern "C"
void webbrowser2_fnQueryStatusWB (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

	pRetData->m_int=pUnit->QueryStatusWB ((OLECMDID)pArgInf [1].m_int);
}

extern "C"
void webbrowser2_fnPutProperty (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);
//	VARIANT pvtIn;
	//V_BOOL(&pvtIn)=(VARIANT_BOOL)TRUE;

	
//	pUnit->PutProperty("Silent2",pvtIn);
	pUnit->PutProperty(pArgInf [1].m_pText,*(VARIANT*)pArgInf [2].m_pCompoundData );
}

extern "C"
void webbrowser2_fnGetProperty (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);
	pRetData->m_pCompoundData= (VARIANT*)NotifySys (NRS_MALLOC, sizeof(VARIANT), 0);
	(*((VARIANT*)pRetData->m_pCompoundData)).vt=VT_I4;

	*(VARIANT*)pRetData->m_pCompoundData=pUnit->GetProperty(pArgInf [1].m_pText);
}
//////////��������/////////////

extern "C"
void webbrowser2_fnJustify (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);


		CString strURL;
	switch (pArgInf [1].m_int)
	{
	case 0:
		strURL="JustifyNone";
		break;
	case 1:
		strURL="JustifyLeft";
		break;
	case 2:
		strURL="JustifyCenter";
		break;
	case 3:
		strURL="JustifyRight";
		break;
	case 4:
		strURL="insertunorderedlist";
		break;
	case 5:
		strURL="insertorderedlist";
		break;
	case 6:
		strURL="indent";
		break;
	case 7:
		strURL="outdent";
		break;

	}
		pRetData->m_bool=pUnit->execCommand (strURL);



}

extern "C"
void webbrowser2_fnUnselect (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL("Unselect");
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnSaveAs (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL("SaveAs");
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnOverWrite (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL("OverWrite");
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnSetFontStyle (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL;

	switch (pArgInf [1].m_int)
	{
	case 0:
		strURL="Bold";
		break;
	case 1:
		strURL="Italic";
		break;
	case 2:
		strURL="Underline";
		break;
	case 3:
		strURL="StrikeThrough";
		break;
	case 4:
		strURL="Superscript";
		break;
	case 5:
		strURL="Subscript";
		break;

	}
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnCreateLink (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL("CreateLink");
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnUnlink (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);

		CString strURL("Unlink");
		pRetData->m_bool=pUnit->execCommand (strURL);

}

extern "C"
void webbrowser2_fnpasteHTML (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);


	IHTMLSelectionObject * pObject;
	IDispatch * Range;
	IHTMLTxtRange * TxtRange;
	pRetData->m_bool=FALSE;

	IHTMLDocument2* pDoc =(IHTMLDocument2*)pUnit->GetHtmlDocument();

	if(!pDoc)
		return;
	CString strURL(pArgInf [1].m_pText);
	BSTR bstr = strURL.AllocSysString();

	HRESULT hr=pDoc->get_selection(&pObject);
	if(SUCCEEDED(hr))
	{
		hr=pObject->createRange( &Range);
		if(SUCCEEDED(hr))
		{
			hr=Range->QueryInterface(&TxtRange);
			if(SUCCEEDED(hr))
			{
				hr=TxtRange->pasteHTML(bstr);
				pRetData->m_bool=SUCCEEDED(hr);
				TxtRange->Release();
			}
			Range->Release();
		}
		pObject->Release ();
	}
	pDoc->Release ();

	::SysFreeString(bstr);

}

extern "C"
void webbrowser2_fnExecCommand (PMDATA_INF pRetData, INT nArgCount, PMDATA_INF pArgInf)
{
	CViewHtml* pUnit = (CViewHtml*)GetWndPtr (pArgInf);


	pRetData->m_int=pUnit->ExecHTMCommand (pArgInf [1].m_int);

}
	
///////////////////////////////////fnWriteCookie
//*** ����ʵ����Ϣ:
#ifndef __E_STATIC_LIB

PFN_EXECUTE_CMD s_RunFunc [] =	// ����Ӧ��s_CmdInfo�е������˳���Ӧ
{

	webbrowser2_fnNavigate,
	webbrowser2_fnGetApplication,
	webbrowser2_fnGetHtmlDocument,
	webbrowser2_fnGetContainer,
	webbrowser2_fnGoForward,
	webbrowser2_fnGoBack,
	webbrowser2_fnGoHome,
	webbrowser2_fnGoSearch,
	webbrowser2_fnRefresh,
	webbrowser2_fnStop,
	webbrowser2_fnExecute,
	webbrowser2_fnQueryStatusWB,
	webbrowser2_fnPutProperty,
	webbrowser2_fnGetProperty,
	webbrowser2_fnJustify,
	webbrowser2_fnUnselect,
	webbrowser2_fnSaveAs,
	webbrowser2_fnOverWrite,
	webbrowser2_fnSetFontStyle,
	webbrowser2_fnCreateLink,
	webbrowser2_fnUnlink,
	webbrowser2_fnpasteHTML,
	webbrowser2_fnExecCommand,
};


static const char* const g_CmdNames[] = 
{
	"webbrowser2_fnNavigate",
    "webbrowser2_fnGetApplication",
	"webbrowser2_fnGetHtmlDocument",
	"webbrowser2_fnGetContainer",
	"webbrowser2_fnGoForward",
	"webbrowser2_fnGoBack",
	"webbrowser2_fnGoHome",
	"webbrowser2_fnGoSearch",
	"webbrowser2_fnRefresh",
	"webbrowser2_fnStop",
	"webbrowser2_fnExecute",
	"webbrowser2_fnQueryStatusWB",
	"webbrowser2_fnPutProperty",
	"webbrowser2_fnGetProperty",
	"webbrowser2_fnJustify",
	"webbrowser2_fnUnselect",
	"webbrowser2_fnSaveAs",
	"webbrowser2_fnOverWrite",
	"webbrowser2_fnSetFontStyle",
	"webbrowser2_fnCreateLink",
	"webbrowser2_fnUnlink",
	"webbrowser2_fnpasteHTML",
	"webbrowser2_fnExecCommand",
};
///////////////////////////////////

//*** ����������Ϣ:

// !!! ע�ⳣ��ֵ�����Ѿ����õ������У����Ծ��Բ��ܸĶ���
// ˳��ֵ���ܸĶ�

LIB_CONST_INFO s_ConstInfo [] =
{
	{	_WT("ǰ��"),	NULL,	NULL,	LVL_SIMPLE,	CT_NUM,	NULL,	1,	},
	{	_WT("����"),	NULL,	NULL,	LVL_SIMPLE,	CT_NUM,	NULL,	2,	},
	{	_WT("����״̬"),	NULL,	NULL,	LVL_SIMPLE,	CT_NUM,	NULL,	-1,	},
};

#endif
/////////////////////////////////////////////////////////////////////////////

INT WINAPI ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
	INT nRet = NR_OK;
	switch (nMsg)
	{
	case NL_SYS_NOTIFY_FUNCTION:
		g_fnNotifySys = (PFN_NOTIFY_SYS)dwParam1;
		break;
	default:
		nRet = NR_ERR;
		break;
	}

	return nRet;
}

EXTERN_C INT WINAPI webbrowser2_ProcessNotifyLib (INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
#ifndef __E_STATIC_LIB
	if(nMsg == NL_GET_CMD_FUNC_NAMES)
		return (INT) g_CmdNames;
	else if(nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME)
		return (INT) "webbrowser2_ProcessNotifyLib";
	else if(nMsg == NL_GET_DEPENDENT_LIBS)
		return NULL;
#endif
	return ProcessNotifyLib(nMsg, dwParam1, dwParam2);
}
/////////////////////////////////////////////////////////////////////////////
#ifndef __E_STATIC_LIB
//////////// �ⶨ�忪ʼ
static LIB_INFO s_LibInfo =
{
/*Lib Format Ver*/		LIB_FORMAT_VER,		// ����δ�á�

// ��֧�ֿ��GUID����
// guid: {5014D8FA-6DCA-40b6-8FA6-26D8183666EB}
#define		LI_LIB_GUID_STR	"F600363078DE49c5B10AF62C7A13B37E"
/*guid str*/			_T (LI_LIB_GUID_STR),

/*m_nMajorVersion*/		3,
/*m_nMinorVersion*/		0,

//!!!	ע�⣺������ɾ�������������ڵ�Ԫ���������͡�������Ϣ�ȣ�ֻҪ�԰���
//!!! �ļ����ɻ����Ӱ�죬�����������汾�ţ�������ֻ�޸�BuildNumber��
//!!!   �Ķ����������汾��!!!
/*m_nBuildNumber*/		3,	// 1: 2.5;  2: 2.5���Ű�; 3: 3.0��
		// �����汾�ţ�����Դ˰汾�����κδ���
		//   ���汾�Ž�����������ͬ��ʽ�汾�ŵĿ⣨Ʃ������޸��˼��� BUG����
		// �κι��������û�ʹ�õİ汾��˰汾�Ŷ�Ӧ�ò�һ����
		//   ��ֵʱӦ��˳�������

/*m_nRqSysMajorVer*/		3,
/*m_nRqSysMinorVer*/		6,
/*m_nRqSysKrnlLibMajorVer*/	3,
/*m_nRqSysKrnlLibMinorVer*/	7,

/*name*/				_T ("WEB�����"),
/*lang*/				1,
/*explain*/				_WT("��֧�ֿ��װ��WEB ������ؼ���"),
/*dwState*/				_LIB_OS(__OS_WIN),

//֧�ֿ��������Ϣ
/*szAuthor*/	_WT("�������"),
/*szZipCode*/	NULL,
/*szAddress*/	NULL,
/*szPhoto*/		_WT("8888888"),
/*szFax*/		_WT("8888888"),
/*szEmail*/		_WT("catboygo@163.com"),
/*szHomePage*/	_WT("http://www.ermayina.org/"),
/*szOther*/		_WT("ף��һ����˳�������³ɣ�"),

/*type count*/			sizeof (s_DataType) / sizeof (s_DataType[0]),
/*PLIB_DATA_TYPE_INFO*/	s_DataType,

/*CategoryCount*/ 0,	// ���������Ӵ�ֵ��
/*category*/_WT("\0"	// ���˵����ÿ��Ϊһ�ַ���,ǰ��λ���ֱ�ʾͼ��������(��1��ʼ,0��).
				"\0"),
/*CmdCount*/				sizeof (s_CmdInfo) / sizeof (s_CmdInfo [0]),
/*BeginCmd*/				s_CmdInfo,
/*m_pCmdsFunc*/             s_RunFunc,
/*pfnRunAddInFn*/			NULL,
/*szzAddInFnInfo*/			NULL,

/*pfnNotify*/				webbrowser2_ProcessNotifyLib,

/*pfnRunSuperTemplate*/		NULL,
/*szzSuperTemplateInfo*/	NULL,

/*nLibConstCount*/			sizeof (s_ConstInfo) / sizeof (s_ConstInfo [0]),
/*pLibConst*/				s_ConstInfo,

/*szzDependFiles*/			NULL,
};

PLIB_INFO WINAPI GetNewInf ()
{
	return &s_LibInfo;
}

#endif	

