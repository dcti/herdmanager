#if !defined(AFX_COWGRID_H__3A577603_C5DD_11D3_943C_00104BF7274C__INCLUDED_)
#define AFX_COWGRID_H__3A577603_C5DD_11D3_943C_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CowGrid.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCowGrid window

class CCowGrid : public CListCtrl
{
// Construction
public:
	CCowGrid();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCowGrid)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCowGrid();

	// Generated message map functions
protected:
	//{{AFX_MSG(CCowGrid)
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COWGRID_H__3A577603_C5DD_11D3_943C_00104BF7274C__INCLUDED_)
