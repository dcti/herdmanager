// HerdManagerDialogDlg.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManagerDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


BEGIN_MESSAGE_MAP(CHerdManagerDialog, CDialog)
	//{{AFX_MSG_MAP(CHerdManagerDialog)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDDEFAULTSETUP, OnDefaultsetup)
	ON_BN_CLICKED(IDADDCOW, OnAddcow)
	ON_BN_CLICKED(IDINSTALLSERVICE, OnInstallservice)
	ON_BN_CLICKED(IDREMOVECOW, OnRemovecow)
	ON_BN_CLICKED(IDREMOVESERVICE, OnRemoveservice)
	ON_BN_CLICKED(IDSETUP, OnSetup)
	ON_BN_CLICKED(IDSTARTSERVICE, OnStartservice)
	ON_BN_CLICKED(IDSTOPSERVICE, OnStopservice)
	ON_BN_CLICKED(IDUPDATESTATUS, OnUpdatestatus)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


BEGIN_EVENTSINK_MAP(CHerdManagerDialog, CDialog)
    //{{AFX_EVENTSINK_MAP(CHerdManagerDialog)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()


/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialog dialog

CHerdManagerDialog::CHerdManagerDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CHerdManagerDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHerdManagerDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHerdManagerDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHerdManagerDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialog message handlers

BOOL CHerdManagerDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}


// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CHerdManagerDialog::OnPaint() 
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

void CHerdManagerDialog::OnDefaultsetup() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnAddcow() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnInstallservice() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnRemovecow() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnRemoveservice() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnSetup() 
{
	// TODO: Add your control notification handler code here
	
}

void CHerdManagerDialog::OnStartservice() 
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

void CHerdManagerDialog::OnStopservice() 
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

void CHerdManagerDialog::OnUpdatestatus() 
{
	// TODO: Add your control notification handler code here
	
}


void CHerdManagerDialog::OnSize(UINT nType, int cx, int cy) 
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

