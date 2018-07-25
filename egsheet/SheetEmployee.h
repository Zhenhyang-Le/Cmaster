#if !defined(AFX_SHEETEMPLOYEE_H__64532CA9_56D3_4AFF_9A61_16944F1EB8CA__INCLUDED_)
#define AFX_SHEETEMPLOYEE_H__64532CA9_56D3_4AFF_9A61_16944F1EB8CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SheetEmployee.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSheetEmployee
#include "PageBase.h"
#include "PageEdu.h"
#include "PageWork.h"

class CSheetEmployee : public CPropertySheet
{
	DECLARE_DYNAMIC(CSheetEmployee)

// Construction
public:
	CSheetEmployee(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CSheetEmployee(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:
	CPageBase pageBase;			// 定义CPageBase属性页对象
	CPageEdu pageEdu;			// 定义CPageEdu属性页对象
	CPageWork pageWork;			// 定义CPageWork属性页对象

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSheetEmployee)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSheetEmployee();

	// Generated message map functions
protected:
	//{{AFX_MSG(CSheetEmployee)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHEETEMPLOYEE_H__64532CA9_56D3_4AFF_9A61_16944F1EB8CA__INCLUDED_)
