#if !defined(AFX_MAIN_TEST_H__AF9F92E1_BFE4_11D3_9432_00104BF7274C__INCLUDED_)
#define AFX_MAIN_TEST_H__AF9F92E1_BFE4_11D3_9432_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Main_test.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMain_test dialog

class CMain_test : public CDialog
{
// Construction
public:
	CMain_test(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMain_test)
	enum { IDD = IDD_MAIN_TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMain_test)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMain_test)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAIN_TEST_H__AF9F92E1_BFE4_11D3_9432_00104BF7274C__INCLUDED_)
