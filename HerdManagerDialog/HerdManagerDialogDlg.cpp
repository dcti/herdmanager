// HerdManagerDialogDlg.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManagerDialog.h"
#include "HerdManagerDialogDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialogDlg dialog

CHerdManagerDialogDlg::CHerdManagerDialogDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHerdManagerDialogDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHerdManagerDialogDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHerdManagerDialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHerdManagerDialogDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CHerdManagerDialogDlg, CDialog)
	//{{AFX_MSG_MAP(CHerdManagerDialogDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDDEFAULTSETUP, OnDefaultsetup)
	ON_BN_CLICKED(IDADDCOW, OnAddcow)
	ON_BN_CLICKED(IDABOUT, OnAbout)
	ON_BN_CLICKED(IDINSTALLSERVICE, OnInstallservice)
	ON_BN_CLICKED(IDQUIT, OnQuit)
	ON_BN_CLICKED(IDREMOVECOW, OnRemovecow)
	ON_BN_CLICKED(IDREMOVESERVICE, OnRemoveservice)
	ON_BN_CLICKED(IDSETUP, OnSetup)
	ON_BN_CLICKED(IDSTARTSERVICE, OnStartservice)
	ON_BN_CLICKED(IDSTOPSERVICE, OnStopservice)
	ON_BN_CLICKED(IDUPDATESTATUS, OnUpdatestatus)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialogDlg message handlers

BOOL CHerdManagerDialogDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CHerdManagerDialogDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CHerdManagerDialogDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CHerdManagerDialogDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CHerdManagerDialogDlg::OnDefaultsetup() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnAddcow() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnAbout() 
{
	CAboutDlg dlgAbout;
	dlgAbout.DoModal();
}

void CHerdManagerDialogDlg::OnInstallservice() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnQuit() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnRemovecow() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnRemoveservice() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnSetup() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialogDlg::OnStartservice() 
{
	// TODO: Add your control notification handler code here

	
/*
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
*/

}

void CHerdManagerDialogDlg::OnStopservice() 
{
	// TODO: Add your control notification handler code here
/*
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
*/
	
}

void CHerdManagerDialogDlg::OnUpdatestatus() 
{
	// TODO: Add your control notification handler code here
	
}

BEGIN_EVENTSINK_MAP(CHerdManagerDialogDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CHerdManagerDialogDlg)
	ON_EVENT(CHerdManagerDialogDlg, IDC_COWGRID, -600 /* Click */, OnClickCowgrid, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CHerdManagerDialogDlg::OnClickCowgrid() 
{
	// TODO: Add your control notification handler code here
	
}


void CHerdManagerDialogDlg::OnSize(UINT nType, int cx, int cy) 
{

	if (cx < 250)
	{
		cx = 250;
	}

	if (cy < 192)
	{
		cy = 192;
	}

	CDialog::OnSize(nType, cx, cy);
}
