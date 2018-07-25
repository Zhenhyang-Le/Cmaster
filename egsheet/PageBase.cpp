// PageBase.cpp : implementation file
//

#include "stdafx.h"
#include "egsheet.h"
#include "PageBase.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageBase property page

IMPLEMENT_DYNCREATE(CPageBase, CPropertyPage)

CPageBase::CPageBase() : CPropertyPage(CPageBase::IDD)
{
	//{{AFX_DATA_INIT(CPageBase)
	m_szName = _T("");
	//}}AFX_DATA_INIT
}

CPageBase::~CPageBase()
{
}

void CPageBase::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageBase)
	DDX_Text(pDX, IDC_EDIT_NAME, m_szName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageBase, CPropertyPage)
	//{{AFX_MSG_MAP(CPageBase)
	ON_EN_CHANGE(IDC_EDIT_NAME, OnChangeEditName)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageBase message handlers

void CPageBase::OnChangeEditName() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CPropertyPage::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	SetModified(TRUE);
}
