// egsheet.h : main header file for the EGSHEET application
//

#if !defined(AFX_EGSHEET_H__FEEC5B74_5C77_4307_9AD1_D3871DD3F9D5__INCLUDED_)
#define AFX_EGSHEET_H__FEEC5B74_5C77_4307_9AD1_D3871DD3F9D5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEgsheetApp:
// See egsheet.cpp for the implementation of this class
//

class CEgsheetApp : public CWinApp
{
public:
	CEgsheetApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEgsheetApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEgsheetApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EGSHEET_H__FEEC5B74_5C77_4307_9AD1_D3871DD3F9D5__INCLUDED_)
