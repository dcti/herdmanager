; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CHerdManagerDialogDlg
LastTemplate=CListCtrl
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "HerdManagerDialog.h"

ClassCount=4
Class1=CHerdManagerDialogApp
Class2=CHerdManagerDialogDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CCowGrid
Resource3=IDD_HERDMANAGERDIALOG_DIALOG

[CLS:CHerdManagerDialogApp]
Type=0
HeaderFile=HerdManagerDialog.h
ImplementationFile=HerdManagerDialog.cpp
Filter=N

[CLS:CHerdManagerDialogDlg]
Type=0
HeaderFile=HerdManagerDialogDlg.h
ImplementationFile=HerdManagerDialogDlg.cpp
Filter=D
LastObject=CHerdManagerDialogDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=HerdManagerDialogDlg.h
ImplementationFile=HerdManagerDialogDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_HERDMANAGERDIALOG_DIALOG]
Type=1
Class=CHerdManagerDialogDlg
ControlCount=12
Control1=IDUPDATESTATUS,button,1342242816
Control2=IDADDCOW,button,1342242816
Control3=IDC_COWGRID,{0ECD9B64-23AA-11D0-B351-00A0C9055D8E},1342242816
Control4=IDREMOVECOW,button,1342242816
Control5=IDINSTALLSERVICE,button,1342242816
Control6=IDREMOVESERVICE,button,1342242816
Control7=IDSTARTSERVICE,button,1342242816
Control8=IDSTOPSERVICE,button,1342242816
Control9=IDSETUP,button,1342242816
Control10=IDDEFAULTSETUP,button,1342242816
Control11=IDABOUT,button,1342242816
Control12=IDQUIT,button,1342242817

[CLS:CCowGrid]
Type=0
HeaderFile=CowGrid.h
ImplementationFile=CowGrid.cpp
BaseClass=CListCtrl
Filter=W
VirtualFilter=FWC

