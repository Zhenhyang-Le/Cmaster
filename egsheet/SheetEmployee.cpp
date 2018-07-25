// SheetEmployee.cpp : implementation file
//

#include "stdafx.h"
#include "egsheet.h"
#include "SheetEmployee.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSheetEmployee

IMPLEMENT_DYNAMIC(CSheetEmployee, CPropertySheet)

CSheetEmployee::CSheetEmployee(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{	
	AddPage(&pageBase);	// 将CPageBase属性页添加到属性表
	AddPage(&pageEdu);	// 将CPageEdu属性页添加到属性表
	AddPage(&pageWork);	// 将CPageWork属性页添加到属性表
}

CSheetEmployee::CSheetEmployee(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	AddPage(&pageBase);	// 将CPageBase属性页添加到属性表
	AddPage(&pageEdu);	// 将CPageEdu属性页添加到属性表
	AddPage(&pageWork);	// 将CPageWork属性页添加到属性表
}

CSheetEmployee::~CSheetEmployee()
{
}


BEGIN_MESSAGE_MAP(CSheetEmployee, CPropertySheet)
	//{{AFX_MSG_MAP(CSheetEmployee)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSheetEmployee message handlers
