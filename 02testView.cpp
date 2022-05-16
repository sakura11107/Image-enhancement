// 02testView.cpp : implementation of the CMy02testView class
//

#include "stdafx.h"
#include "02test.h"

#include "02testDoc.h"
#include "02testView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy02testView

IMPLEMENT_DYNCREATE(CMy02testView, CScrollView)

BEGIN_MESSAGE_MAP(CMy02testView, CScrollView)
	//{{AFX_MSG_MAP(CMy02testView)
	ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy02testView construction/destruction

CMy02testView::CMy02testView()
{
	// TODO: add construction code here
	m_pMemDC = NULL;
	m_pBKBitmap = NULL;
	m_BKBitmapSize.cx = 1024;
	m_BKBitmapSize.cy = 768;

}

CMy02testView::~CMy02testView()
{
}

BOOL CMy02testView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy02testView drawing

void CMy02testView::OnDraw(CDC* pDC)
{
	CMy02testDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	CPoint pos = GetScrollPosition();//根据当前滑条位置进行图像拷贝
	//!!!如果当前DC是CClientDC,则前两个参数应为0,0 (注意CDC 与 CClientDC的区别)
	pDC->BitBlt(pos.x,pos.y,m_BKBitmapSize.cx,m_BKBitmapSize.cy,m_pMemDC,pos.x,pos.y,SRCCOPY);


}

void CMy02testView::OnInitialUpdate()
{
		
	CScrollView::OnInitialUpdate();
	m_pMemDC = new CDC;
	CClientDC dc(this);
	m_pMemDC->CreateCompatibleDC(&dc);
	m_pBKBitmap = new CBitmap;
	m_pBKBitmap->CreateCompatibleBitmap(&dc,m_BKBitmapSize.cx,m_BKBitmapSize.cy);//source DC can not be m_pMemDC
	m_pMemDC->SelectObject(m_pBKBitmap);

	CBrush BKBrush(RGB(255,255,255));
	CRect BKRect(0,0,m_BKBitmapSize.cx,m_BKBitmapSize.cy);
	m_pMemDC->FillRect(&BKRect,&BKBrush);
	DeleteObject(BKBrush);

	SetScrollSizes(MM_TEXT,m_BKBitmapSize);


}

/////////////////////////////////////////////////////////////////////////////
// CMy02testView printing

BOOL CMy02testView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy02testView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy02testView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy02testView diagnostics

#ifdef _DEBUG
void CMy02testView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CMy02testView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CMy02testDoc* CMy02testView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy02testDoc)));
	return (CMy02testDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy02testView message handlers

void CMy02testView::OnFileOpen() 
{
	// TODO: Add your command handler code here
    char szFilter[] = "BMP Files (*.bmp)|*.bmp|";
	CFileDialog dlg(TRUE,"bmp",NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,szFilter);
    dlg.DoModal();
    CMy02testDoc* pDoc = GetDocument();
	pDoc->m_BMP.LoadBmpFile(dlg.GetPathName());

	pDoc->m_BMP.PlayBmp(m_pMemDC,CPoint(0,0));
    
    


	Invalidate(FALSE);

}
