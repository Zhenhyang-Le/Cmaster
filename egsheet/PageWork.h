#if !defined(AFX_PAGEWORK_H__E643F010_7EDD_46AD_9D37_8D2FFFF3498F__INCLUDED_)
#define AFX_PAGEWORK_H__E643F010_7EDD_46AD_9D37_8D2FFFF3498F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageWork.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageWork dialog

class CPageWork : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageWork)

// Construction
public:
	CPageWork();
	~CPageWork();

// Dialog Data
	//{{AFX_DATA(CPageWork)
	enum { IDD = IDD_DIALOG_WORKINFO };
	CString	m_szCompany;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageWork)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageWork)
	afx_msg void OnChangeEditCompany();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEWORK_H__E643F010_7EDD_46AD_9D37_8D2FFFF3498F__INCLUDED_)
