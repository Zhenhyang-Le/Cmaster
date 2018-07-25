// PageWork.cpp : implementation file
//

#include "stdafx.h"
#include "egsheet.h"
#include "PageWork.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageWork property page

IMPLEMENT_DYNCREATE(CPageWork, CPropertyPage)

CPageWork::CPageWork() : CPropertyPage(CPageWork::IDD)
{
	//{{AFX_DATA_INIT(CPageWork)
	m_szCompany = _T("");
	//}}AFX_DATA_INIT
}

CPageWork::~CPageWork()
{
}

void CPageWork::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageWork)
	DDX_Text(pDX, IDC_EDIT_COMPANY, m_szCompany);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageWork, CPropertyPage)
	//{{AFX_MSG_MAP(CPageWork)
	ON_EN_CHANGE(IDC_EDIT_COMPANY, OnChangeEditCompany)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageWork message handlers

void CPageWork::OnChangeEditCompany() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CPropertyPage::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	SetModified(TRUE);
}
