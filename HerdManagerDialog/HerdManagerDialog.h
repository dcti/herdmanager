// HerdManagerDialog.h : main header file for the HERDMANAGERDIALOG application
//

#if !defined(AFX_HERDMANAGERDIALOG_H__2CAFC127_C59B_11D3_943C_00104BF7274C__INCLUDED_)
#define AFX_HERDMANAGERDIALOG_H__2CAFC127_C59B_11D3_943C_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialogApp:
// See HerdManagerDialog.cpp for the implementation of this class
//

class CHerdManagerDialogApp : public CWinApp
{
public:
	CHerdManagerDialogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHerdManagerDialogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHerdManagerDialogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HERDMANAGERDIALOG_H__2CAFC127_C59B_11D3_943C_00104BF7274C__INCLUDED_)
