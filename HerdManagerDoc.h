#if !defined(AFX_HERDMANAGERDOC_H__AF9F92DC_BFE4_11D3_9432_00104BF7274C__INCLUDED_)
#define AFX_HERDMANAGERDOC_H__AF9F92DC_BFE4_11D3_9432_00104BF7274C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// HerdManagerDoc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDoc document

class CHerdManagerDoc : public CDocument
{
protected:
	CHerdManagerDoc();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CHerdManagerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHerdManagerDoc)
	public:
	virtual void Serialize(CArchive& ar);   // overridden for document i/o
	protected:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	CCow* NewCow();
	virtual ~CHerdManagerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	void InitDocument();
	//{{AFX_MSG(CHerdManagerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HERDMANAGERDOC_H__AF9F92DC_BFE4_11D3_9432_00104BF7274C__INCLUDED_)
