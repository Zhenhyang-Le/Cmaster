; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CEgsheetDlg
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "egsheet.h"

ClassCount=7
Class1=CEgsheetApp
Class2=CEgsheetDlg
Class3=CAboutDlg

ResourceCount=7
Resource1=IDD_DIALOG_BASEINFO
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG_WORKINFO
Resource4=IDD_DIALOG_EDUINFO
Resource5=IDD_ABOUTBOX
Class4=CPageWork
Class5=CPageBase
Class6=CPageEdu
Resource6=IDD_EGSHEET_DIALOG
Class7=CSheetEmployee
Resource7=IDD_DIALOG_EMPLOYEE

[CLS:CEgsheetApp]
Type=0
HeaderFile=egsheet.h
ImplementationFile=egsheet.cpp
Filter=N

[CLS:CEgsheetDlg]
Type=0
HeaderFile=egsheetDlg.h
ImplementationFile=egsheetDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CEgsheetDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=egsheetDlg.h
ImplementationFile=egsheetDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_EGSHEET_DIALOG]
Type=1
Class=CEgsheetDlg
ControlCount=5
Control1=IDC_BUTTON_SHOWSHEET,button,1342242816
Control2=IDC_BUTTON_DDX,button,1342242816
Control3=IDC_EDIT_INFO,edit,1350636676
Control4=IDC_BUTTON_SHOWNOMODELLSHEET,button,1342242816
Control5=IDC_BUTTON_APPLYTEST,button,1342242816

[DLG:IDD_DIALOG_BASEINFO]
Type=1
Class=CPageBase
ControlCount=3
Control1=IDC_STATIC,static,1342308865
Control2=IDC_EDIT_NAME,edit,1350631552
Control3=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG_WORKINFO]
Type=1
Class=CPageWork
ControlCount=3
Control1=IDC_STATIC,static,1342308865
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT_COMPANY,edit,1350631552

[DLG:IDD_DIALOG_EDUINFO]
Type=1
Class=CPageEdu
ControlCount=3
Control1=IDC_STATIC,static,1342308865
Control2=IDC_STATIC,static,1342308352
Control3=IDC_EDIT_SCHOOL,edit,1350631552

[CLS:CPageWork]
Type=0
HeaderFile=PageWork.h
ImplementationFile=PageWork.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=IDC_EDIT_COMPANY

[CLS:CPageBase]
Type=0
HeaderFile=PageBase.h
ImplementationFile=PageBase.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=IDC_EDIT_NAME

[CLS:CPageEdu]
Type=0
HeaderFile=PageEdu.h
ImplementationFile=PageEdu.cpp
BaseClass=CPropertyPage
Filter=D
VirtualFilter=idWC
LastObject=CPageEdu

[DLG:IDD_DIALOG_EMPLOYEE]
Type=1
Class=CSheetEmployee
ControlCount=0

[CLS:CSheetEmployee]
Type=0
HeaderFile=SheetEmployee.h
ImplementationFile=SheetEmployee.cpp
BaseClass=CPropertySheet
Filter=W
LastObject=CSheetEmployee

