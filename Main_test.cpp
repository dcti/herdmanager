// Main_test.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManager.h"
#include "Main_test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMain_test dialog


CMain_test::CMain_test(CWnd* pParent /*=NULL*/)
	: CDialog(CMain_test::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMain_test)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CMain_test::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMain_test)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMain_test, CDialog)
	//{{AFX_MSG_MAP(CMain_test)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMain_test message handlers
