#if !defined(AFX_MAINFRAME_H__DB2A3111_BEE0_11D3_9432_00104BF7274C__INCLUDED_)
#define AFX_MAINFRAME_H__DB2A3111_BEE0_11D3_9432_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MainFrame.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// MainFrame dialog

class MainFrame : public CDialog
{
// Construction
public:
	MainFrame(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MainFrame)
	enum { IDD = IDR_MAINFRAME };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MainFrame)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MainFrame)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRAME_H__DB2A3111_BEE0_11D3_9432_00104BF7274C__INCLUDED_)
