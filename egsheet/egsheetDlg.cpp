// egsheetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "egsheet.h"
#include "egsheetDlg.h"
#include "PageBase.h"
#include "PageEdu.h"
#include "PageWork.h"
#include "SheetEmployee.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEgsheetDlg dialog

CEgsheetDlg::CEgsheetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEgsheetDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEgsheetDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	pageBase.m_szName = _T("����");				// ΪCPageBase����ҳ�ĳ�Ա������ֵ
	pageEdu.m_szSchool = _T("������ѧ");		// ΪCPageEdu����ҳ�ĳ�Ա������ֵ
	pageWork.m_szCompany = _T("�Զ����о���");	// ΪCPageWork����ҳ�ĳ�Ա������ֵ
	mysheet.AddPage(&pageBase);	// ��CPageBase����ҳ��ӵ����Ա�
	mysheet.AddPage(&pageEdu);	// ��CPageEdu����ҳ��ӵ����Ա�
	mysheet.AddPage(&pageWork);	// ��CPageWork����ҳ��ӵ����Ա�
}

void CEgsheetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEgsheetDlg)
	DDX_Control(pDX, IDC_EDIT_INFO, m_editInfo);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CEgsheetDlg, CDialog)
	//{{AFX_MSG_MAP(CEgsheetDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_SHOWSHEET, OnButtonShowsheet)
	ON_BN_CLICKED(IDC_BUTTON_DDX, OnButtonDdx)
	ON_BN_CLICKED(IDC_BUTTON_SHOWNOMODELLSHEET, OnButtonShownomodellsheet)
	ON_BN_CLICKED(IDC_BUTTON_APPLYTEST, OnButtonApplytest)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEgsheetDlg message handlers

BOOL CEgsheetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	sheet = NULL;
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEgsheetDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEgsheetDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEgsheetDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CEgsheetDlg::OnButtonShowsheet()	// �������Ա�Ի���
{
	CPropertySheet sheet;		// �������Ա����
	CPageBase pageBase;			// ����CPageBase����ҳ����
	CPageEdu pageEdu;			// ����CPageEdu����ҳ����
	CPageWork pageWork;			// ����CPageWork����ҳ����
	sheet.AddPage(&pageBase);	// ��CPageBase����ҳ��ӵ����Ա�
	sheet.AddPage(&pageEdu);	// ��CPageEdu����ҳ��ӵ����Ա�
	sheet.AddPage(&pageWork);	// ��CPageWork����ҳ��ӵ����Ա�
	sheet.DoModal();			// ��ʾ���Ա�Ի���
}

void CEgsheetDlg::OnButtonDdx()		// ���Ա�Ի���ֵ�Ľ���
{
	CPropertySheet sheet;		// �������Ա����
	CPageBase pageBase;			// ����CPageBase����ҳ����
	CPageEdu pageEdu;			// ����CPageEdu����ҳ����
	CPageWork pageWork;			// ����CPageWork����ҳ����
	pageBase.m_szName = _T("����");				// ΪCPageBase����ҳ�ĳ�Ա������ֵ
	pageEdu.m_szSchool = _T("������ѧ");		// ΪCPageEdu����ҳ�ĳ�Ա������ֵ
	pageWork.m_szCompany = _T("�Զ����о���");	// ΪCPageWork����ҳ�ĳ�Ա������ֵ
	sheet.AddPage(&pageBase);	// ��CPageBase����ҳ��ӵ����Ա�
	sheet.AddPage(&pageEdu);	// ��CPageEdu����ҳ��ӵ����Ա�
	sheet.AddPage(&pageWork);	// ��CPageWork����ҳ��ӵ����Ա�
	if (sheet.DoModal() == IDOK)			// ��ʾ���Ա�Ի���
	{
		CString szInfo;						// ������ʱ����
		szInfo.Format("����=%s\nѧУ=%s\n��˾=%s\n",
			pageBase.m_szName, pageEdu.m_szSchool, pageWork.m_szCompany);	// ��֯�����Ϣ
		m_editInfo.SetWindowText(szInfo);	// ��������Ϣ
	}
}



void CEgsheetDlg::OnButtonShownomodellsheet()	// ��ʾ��ģ̬�Ի���	
{
	if (sheet != NULL)							// �жϷ�ģ̬�Ի����ָ������Ƿ���Ч
	{
		delete sheet;							// ɾ����ģ̬�Ի���
		sheet = NULL;							// ��ֵΪNULL
	}

	sheet = new CSheetEmployee(_T("Ա����Ϣ"));	// ������ģ̬�Ի������
	sheet->Create();							// ��������ʾ��ģ̬�Ի���
}

void CEgsheetDlg::OnButtonApplytest() 
{
	mysheet.DoModal();		// ��ʾ���Ա�Ի���	
}

void CEgsheetDlg::UpdateShow()		// ���Ա�Ի���ֵ����ʾ
{
	CString szInfo;						// ������ʱ����
	szInfo.Format("����=%s\nѧУ=%s\n��˾=%s\n",
			pageBase.m_szName, pageEdu.m_szSchool, pageWork.m_szCompany);	// ��֯�����Ϣ
	m_editInfo.SetWindowText(szInfo);	// ��������Ϣ
}