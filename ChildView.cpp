// ChildView.cpp : implementation of the CChildView class
//

#include "stdafx.h"
#include "HerdManager.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif




BEGIN_MESSAGE_MAP(CChildView,CWnd )
	//{{AFX_MSG_MAP(CChildView)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}

/////////////////////////////////////////////////////////////////////////////
// CChildView message handlers

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), HBRUSH(COLOR_WINDOW+1), NULL);

	return TRUE;
}




int CChildView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CWnd ::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	RECT clrect;
	GetClientRect(&clrect);
	if (!m_listctrl.Create(WS_VISIBLE | LVS_SHOWSELALWAYS | LVS_SINGLESEL | 
		LVS_SORTASCENDING | LVS_REPORT | LVS_NOSORTHEADER, clrect, this, -1))
		return -1;

	// Add all of the list columns.
	m_listctrl.InsertColumn(0, "Computer Name", LVCFMT_LEFT, 100);
	m_listctrl.InsertColumn(1, "Status", LVCFMT_LEFT, 50);
	m_listctrl.InsertColumn(2, "Client ver", LVCFMT_LEFT, 75);
	m_listctrl.InsertColumn(3, "Client e-mail", LVCFMT_LEFT, 150);
	m_listctrl.InsertColumn(4, "Service Name", LVCFMT_LEFT, 100);
	m_listctrl.InsertColumn(5, "Service Path", LVCFMT_LEFT, 150);
	
	return 0;
}

void CChildView::OnSize(UINT nType, int cx, int cy) 
{
	CWnd ::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	RECT clrect;
	GetClientRect(&clrect);
	m_listctrl.SetWindowPos(NULL, clrect.left, clrect.top, 
			(clrect.right - clrect.left), (clrect.bottom - clrect.top), 
			SWP_NOREPOSITION | SWP_NOZORDER);
	
}
