// HerdManagerDoc.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManager.h"
#include "HerdManagerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDoc

IMPLEMENT_DYNCREATE(CHerdManagerDoc, CDocument)

CHerdManagerDoc::CHerdManagerDoc()
{
}

BOOL CHerdManagerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	return TRUE;
}

CHerdManagerDoc::~CHerdManagerDoc()
{
}


BEGIN_MESSAGE_MAP(CHerdManagerDoc, CDocument)
	//{{AFX_MSG_MAP(CHerdManagerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDoc diagnostics

#ifdef _DEBUG
void CHerdManagerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHerdManagerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDoc serialization

void CHerdManagerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CHerdManagerDoc commands

CCow* CHerdManagerDoc::NewCow()
{
	
}

void CHerdManagerDoc::InitDocument()
{

}
