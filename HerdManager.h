// HerdManager.h : main header file for the HERDMANAGER application
//

#if !defined(AFX_HERDMANAGER_H__5A4AB2A5_B238_11D3_942E_00104BF7274C__INCLUDED_)
#define AFX_HERDMANAGER_H__5A4AB2A5_B238_11D3_942E_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols



/////////////////////////////////////////////////////////////////////////////
// CHerdManagerApp:
// See HerdManager.cpp for the implementation of this class
//

class CHerdManagerApp : public CWinApp
{
public:
	CHerdManagerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHerdManagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	HICON LoadIconSm(UINT resId);
	//{{AFX_MSG(CHerdManagerApp)
	afx_msg void OnAppAbout();
	afx_msg void OnHerdManager();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

extern CHerdManagerApp theApp;


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HERDMANAGER_H__5A4AB2A5_B238_11D3_942E_00104BF7274C__INCLUDED_)
