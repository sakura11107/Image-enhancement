// 02testDoc.cpp : implementation of the CMy02testDoc class
//

#include "stdafx.h"
#include "02test.h"



#include "02testDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy02testDoc

IMPLEMENT_DYNCREATE(CMy02testDoc, CDocument)

BEGIN_MESSAGE_MAP(CMy02testDoc, CDocument)
	//{{AFX_MSG_MAP(CMy02testDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy02testDoc construction/destruction

CMy02testDoc::CMy02testDoc()
{
	// TODO: add one-time construction code here

}

CMy02testDoc::~CMy02testDoc()
{
}

BOOL CMy02testDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMy02testDoc serialization

void CMy02testDoc::Serialize(CArchive& ar)
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
// CMy02testDoc diagnostics

#ifdef _DEBUG
void CMy02testDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMy02testDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy02testDoc commands
