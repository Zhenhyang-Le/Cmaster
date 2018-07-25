// egsheetDlg.h : header file
//

#if !defined(AFX_EGSHEETDLG_H__7E386085_817A_46DC_993A_98F39F3831EF__INCLUDED_)
#define AFX_EGSHEETDLG_H__7E386085_817A_46DC_993A_98F39F3831EF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CEgsheetDlg dialog

#include "SheetEmployee.h"

class CEgsheetDlg : public CDialog
{
// Construction
public:
	CEgsheetDlg(CWnd* pParent = NULL);	// standard constructor

	void UpdateShow();


// Dialog Data
	//{{AFX_DATA(CEgsheetDlg)
	enum { IDD = IDD_EGSHEET_DIALOG };
	CEdit	m_editInfo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEgsheetDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	CSheetEmployee* sheet;
	CPropertySheet mysheet;
	CPageBase pageBase;			// 定义CPageBase属性页对象
	CPageEdu pageEdu;			// 定义CPageEdu属性页对象
	CPageWork pageWork;			// 定义CPageWork属性页对象

	// Generated message map functions
	//{{AFX_MSG(CEgsheetDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonShowsheet();
	afx_msg void OnButtonDdx();
	afx_msg void OnButtonShownomodellsheet();
	afx_msg void OnButtonApplytest();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EGSHEETDLG_H__7E386085_817A_46DC_993A_98F39F3831EF__INCLUDED_)
