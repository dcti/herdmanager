// MainFrame.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManager.h"
#include "MainFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MainFrame dialog


MainFrame::MainFrame(CWnd* pParent /*=NULL*/)
	: CDialog(MainFrame::IDD, pParent)
{
	//{{AFX_DATA_INIT(MainFrame)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void MainFrame::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(MainFrame)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(MainFrame, CDialog)
	//{{AFX_MSG_MAP(MainFrame)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MainFrame message handlers


