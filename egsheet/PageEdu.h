#if !defined(AFX_PAGEEDU_H__44E086B0_3E8F_4E7B_9868_6FE61CD2B75D__INCLUDED_)
#define AFX_PAGEEDU_H__44E086B0_3E8F_4E7B_9868_6FE61CD2B75D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageEdu.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageEdu dialog

class CPageEdu : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageEdu)

// Construction
public:
	CPageEdu();
	~CPageEdu();

// Dialog Data
	//{{AFX_DATA(CPageEdu)
	enum { IDD = IDD_DIALOG_EDUINFO };
	CString	m_szSchool;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageEdu)
	public:
	virtual BOOL OnApply();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageEdu)
	afx_msg void OnChangeEditSchool();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEEDU_H__44E086B0_3E8F_4E7B_9868_6FE61CD2B75D__INCLUDED_)
