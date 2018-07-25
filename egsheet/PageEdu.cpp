// PageEdu.cpp : implementation file
//

#include "stdafx.h"
#include "egsheet.h"
#include "PageEdu.h"
#include "EgsheetDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageEdu property page

IMPLEMENT_DYNCREATE(CPageEdu, CPropertyPage)

CPageEdu::CPageEdu() : CPropertyPage(CPageEdu::IDD)
{
	//{{AFX_DATA_INIT(CPageEdu)
	m_szSchool = _T("");
	//}}AFX_DATA_INIT
}

CPageEdu::~CPageEdu()
{
}

void CPageEdu::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageEdu)
	DDX_Text(pDX, IDC_EDIT_SCHOOL, m_szSchool);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageEdu, CPropertyPage)
	//{{AFX_MSG_MAP(CPageEdu)
	ON_EN_CHANGE(IDC_EDIT_SCHOOL, OnChangeEditSchool)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageEdu message handlers

void CPageEdu::OnChangeEditSchool()		// �޸�ѧУ�ı�������ʱ�Ĵ�����
{
	SetModified(TRUE);					// �����޸ı��
}

BOOL CPageEdu::OnApply()				// Ӧ�ð�ť�Ĵ�����
{	
	CEgsheetDlg* pMain = (CEgsheetDlg*)AfxGetMainWnd();		// ��ȡ�����򴰿�
	if (pMain != NULL) pMain->UpdateShow();					// ���������򴰿ڵ���ʾ����
	return CPropertyPage::OnApply();						// ���û���Ĵ�����
}
