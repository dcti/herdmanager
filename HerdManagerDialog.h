// HerdManagerDialogDlg.h : header file
//

#if !defined(AFX_HERDMANAGERDIALOGDLG_H__2CAFC129_C59B_11D3_943C_00104BF7274C__INCLUDED_)
#define AFX_HERDMANAGERDIALOGDLG_H__2CAFC129_C59B_11D3_943C_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDialog dialog

class CHerdManagerDialog : public CDialog
{
// Construction
public:
	CHerdManagerDialog(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHerdManagerDialog)
	enum { IDD = IDD_HERDMANAGERDIALOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHerdManagerDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHerdManagerDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg void OnDefaultsetup();
	afx_msg void OnAddcow();
	afx_msg void OnInstallservice();
	afx_msg void OnRemovecow();
	afx_msg void OnRemoveservice();
	afx_msg void OnSetup();
	afx_msg void OnStartservice();
	afx_msg void OnStopservice();
	afx_msg void OnUpdatestatus();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HERDMANAGERDIALOGDLG_H__2CAFC129_C59B_11D3_943C_00104BF7274C__INCLUDED_)
