// 02testDoc.h : interface of the CMy02testDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_02TESTDOC_H__8CFF8818_0940_44C6_939A_3FF423D146C8__INCLUDED_)
#define AFX_02TESTDOC_H__8CFF8818_0940_44C6_939A_3FF423D146C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BMPEdit.h"

class CMy02testDoc : public CDocument
{
protected: // create from serialization only
	CMy02testDoc();
	DECLARE_DYNCREATE(CMy02testDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy02testDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CBMPEdit m_BMP;
	virtual ~CMy02testDoc();
	
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy02testDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_02TESTDOC_H__8CFF8818_0940_44C6_939A_3FF423D146C8__INCLUDED_)
