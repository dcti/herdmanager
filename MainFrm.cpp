// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "HerdManager.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_SETFOCUS()
	ON_UPDATE_COMMAND_UI(ID_FILE_SERVICEON, OnUpdateFileServiceon)
	ON_UPDATE_COMMAND_UI(ID_FILE_SERVICEOFF, OnUpdateFileServiceoff)
	ON_COMMAND(ID_FILE_SERVICEON, OnFileServiceon)
	ON_COMMAND(ID_FILE_SERVICEOFF, OnFileServiceoff)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	// create a view to occupy the client area of the frame
	if (!m_wndView.Create(NULL, NULL, AFX_WS_DEFAULT_VIEW,
		CRect(0, 0, 0, 0), this, AFX_IDW_PANE_FIRST, NULL))
	{
		TRACE0("Failed to create view window\n");
		return -1;
	}
	
	// Create the toolbars and rebars.
	if (!m_wndToolBar.CreateEx(this) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndDlgBar.Create(this, IDD_DIALOGBAR, CBRS_RIGHT, -1))
	{
		TRACE0("Failed to create dialogbar\n");
		return -1;		// fail to create
	}
	
	if (!m_wndReBar.Create(this) ||
		!m_wndReBar.AddBar(&m_wndToolBar) ||
		!m_wndReBar.AddBar(&m_wndDlgBar))
	{
		TRACE0("Failed to create rebar\n");
		return -1;      // fail to create
	}


	// Create the status bar at the bottom of the window.
	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Remove this if you don't want tool tips
	m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() |
		CBRS_TOOLTIPS | CBRS_FLYBY);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;

	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	cs.lpszClass = AfxRegisterWndClass(0);
	cs.cx = 400;
	cs.cy = 500;
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers
void CMainFrame::OnSetFocus(CWnd* pOldWnd)
{
	// forward focus to the view window
	m_wndView.SetFocus();
}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// let the view have first crack at the command
	if (m_wndView.OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	// otherwise, do default handling
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


void CMainFrame::OnUpdateFileServiceon(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(TRUE);

}

void CMainFrame::OnUpdateFileServiceoff(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(TRUE);
}

void CMainFrame::OnFileServiceon() 
{
	SC_HANDLE sc_handle, sc_service;
	BOOL success;
	LPCTSTR lpMachineName = "WILS1145NT";
	LPCTSTR lpServiceName = "dnetc";

	sc_handle = OpenSCManager(lpMachineName, NULL, SC_MANAGER_ALL_ACCESS);
	if (sc_handle == NULL)
	{
		MessageBox("sc_handle failed");
	}
	else
	{
		sc_service = OpenService(sc_handle, lpServiceName, SERVICE_ALL_ACCESS);
		if (sc_service == NULL)
		{
			MessageBox("sc_service failed");
		}
		else
		{
			success = StartService(sc_service, 0, NULL);
			if (success == 0)
			{
				MessageBox("Start failed.");
			}
			else
			{
				MessageBox("Start succeeded.");
			}
			CloseServiceHandle(sc_service);	
		}
		CloseServiceHandle(sc_handle);
	}
}

void CMainFrame::OnFileServiceoff() 
{
	SC_HANDLE sc_handle, sc_service;
	BOOL success;
	LPCTSTR lpMachineName = "WILS1145NT";
	LPCTSTR lpServiceName = "dnetc";
	LPSERVICE_STATUS lpStatus;

	lpStatus = new SERVICE_STATUS;

	sc_handle = OpenSCManager(lpMachineName, NULL, SC_MANAGER_ALL_ACCESS);
	if (sc_handle == NULL)
	{
		MessageBox("sc_handle failed");
	}
	else
	{
		sc_service = OpenService(sc_handle, lpServiceName, SERVICE_STOP);
		if (sc_service == NULL)
		{
			MessageBox("sc_service failed");
		}
		else
		{
			success = ControlService(sc_service, SERVICE_CONTROL_STOP, lpStatus);
			if (success == 0)
			{
				MessageBox("Stop failed.");
			}
			else
			{
				MessageBox("Stop succeeded.");
			}
			CloseServiceHandle(sc_service);	
		}
		CloseServiceHandle(sc_handle);
	}
}
