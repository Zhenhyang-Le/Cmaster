#if !defined(AFX_PAGEBASE_H__168BFC5F_AD5B_4F91_96A6_77B85553F372__INCLUDED_)
#define AFX_PAGEBASE_H__168BFC5F_AD5B_4F91_96A6_77B85553F372__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageBase.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageBase dialog

class CPageBase : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageBase)

// Construction
public:
	CPageBase();
	~CPageBase();

// Dialog Data
	//{{AFX_DATA(CPageBase)
	enum { IDD = IDD_DIALOG_BASEINFO };
	CString	m_szName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageBase)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageBase)
	afx_msg void OnChangeEditName();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEBASE_H__168BFC5F_AD5B_4F91_96A6_77B85553F372__INCLUDED_)
