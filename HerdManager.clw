; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMain_test
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "HerdManager.h"
LastPage=0

ClassCount=7
Class1=CHerdManagerApp
Class3=CMainFrame
Class4=CAboutDlg

ResourceCount=3
Resource1=IDR_MAINFRAME
Class2=CChildView
Class5=MainFrame
Class6=CHerdManagerDoc
Resource2=IDD_ABOUTBOX
Class7=CMain_test
Resource3=IDD_MAIN_TEST_DIALOG

[CLS:CHerdManagerApp]
Type=0
HeaderFile=HerdManager.h
ImplementationFile=HerdManager.cpp
Filter=N
LastObject=CHerdManagerApp

[CLS:CChildView]
Type=0
HeaderFile=ChildView.h
ImplementationFile=ChildView.cpp
Filter=N
LastObject=ID_APP_ABOUT

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=HerdManager.cpp
ImplementationFile=HerdManager.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_SERVICEON
Command2=ID_FILE_SERVICEOFF
Command3=ID_APP_EXIT
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_VIEW_TOOLBAR
Command9=ID_VIEW_STATUS_BAR
Command10=ID_APP_ABOUT
CommandCount=10

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_EDIT_COPY
Command2=ID_EDIT_PASTE
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_CUT
Command10=ID_EDIT_UNDO
CommandCount=10

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_COW_NEW
Command2=ID_APP_ABOUT
CommandCount=2

[CLS:MainFrame]
Type=0
HeaderFile=MainFrame.h
ImplementationFile=MainFrame.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=MainFrame

[CLS:CHerdManagerDoc]
Type=0
HeaderFile=HerdManagerDoc.h
ImplementationFile=HerdManagerDoc.cpp
BaseClass=CDocument
Filter=N
LastObject=CHerdManagerDoc

[DLG:IDD_MAIN_TEST_DIALOG]
Type=1
Class=CMain_test
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_NEWCOW,edit,1350631552
Control4=IDC_STATIC,static,1342308352

[CLS:CMain_test]
Type=0
HeaderFile=Main_test.h
ImplementationFile=Main_test.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_NEWCOW

