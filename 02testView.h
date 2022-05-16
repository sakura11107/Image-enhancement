// 02testView.h : interface of the CMy02testView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_02TESTVIEW_H__F26A5F02_2572_4F3A_974A_AAE80B004FD9__INCLUDED_)
#define AFX_02TESTVIEW_H__F26A5F02_2572_4F3A_974A_AAE80B004FD9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy02testView : public CScrollView
{
protected: // create from serialization only
	CMy02testView();
	DECLARE_DYNCREATE(CMy02testView)

// Attributes
public:
	CMy02testDoc* GetDocument();

	CDC *m_pMemDC;
	CBitmap *m_pBKBitmap;
	CSize m_BKBitmapSize;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy02testView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMy02testView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy02testView)
	afx_msg void OnFileOpen();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 02testView.cpp
inline CMy02testDoc* CMy02testView::GetDocument()
   { return (CMy02testDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_02TESTVIEW_H__F26A5F02_2572_4F3A_974A_AAE80B004FD9__INCLUDED_)
