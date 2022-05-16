#if !defined(AFX_BMPEDIT_H__CAD01C85_3CBA_4D33_AFDF_14A746B4BD41__INCLUDED_)
#define AFX_BMPEDIT_H__CAD01C85_3CBA_4D33_AFDF_14A746B4BD41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BMPEdit.h : header file
//

//BITMAPINFO的扩展
struct EXT_BITMAPINFO
{
	BITMAPINFOHEADER    bmiHeader;
    RGBQUAD             bmiColors[256];//调色板最大为256
};


/////////////////////////////////////////////////////////////////////////////
// CBMPEdit window

class CBMPEdit
{
// Construction
public:
	CBMPEdit();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBMPEdit)
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL PlayBmp(CDC *pDC, const CPoint &StartPoint);
	int GetColorNum(const BITMAPINFOHEADER &BmpInf);
	BOOL LoadBmpFile(const CString &sBMPFileName);

	virtual ~CBMPEdit();

private:
	BOOL m_bReady;  //数据是否已从文件读取
	CString m_sBMPFileFullName;  //完整路径名
	BITMAPFILEHEADER m_BmpFileHeader;
	EXT_BITMAPINFO m_BmpInfo;//存放 BITMAPINFOHEADER和调色板(非真彩色)
	HGLOBAL m_hgImageData; //图像数据句柄


};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BMPEDIT_H__CAD01C85_3CBA_4D33_AFDF_14A746B4BD41__INCLUDED_)
