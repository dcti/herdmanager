// CowGrid.cpp : implementation file
//

#include "stdafx.h"
#include "HerdManagerDialog.h"
#include "CowGrid.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCowGrid

CCowGrid::CCowGrid()
{
}

CCowGrid::~CCowGrid()
{
}


BEGIN_MESSAGE_MAP(CCowGrid, CListCtrl)
	//{{AFX_MSG_MAP(CCowGrid)
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCowGrid message handlers

void CCowGrid::OnSize(UINT nType, int cx, int cy) 
{
	if (cx < 165)
	{
		cx = 165;
	}
	if (cy < 185)
	{
		cy = 185;
	}

	CListCtrl::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	
}
