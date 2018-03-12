; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CComtestDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "comtest.h"

ClassCount=3
Class1=CComtestApp
Class2=CComtestDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_COMTEST_DIALOG

[CLS:CComtestApp]
Type=0
HeaderFile=comtest.h
ImplementationFile=comtest.cpp
Filter=N

[CLS:CComtestDlg]
Type=0
HeaderFile=comtestDlg.h
ImplementationFile=comtestDlg.cpp
Filter=D
LastObject=IDC_BtnOpen
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=comtestDlg.h
ImplementationFile=comtestDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_COMTEST_DIALOG]
Type=1
Class=CComtestDlg
ControlCount=7
Control1=IDC_EditRxData,edit,1350631552
Control2=IDC_EditTxData,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_BtnOpen,button,1342242816
Control6=IDC_BtnSend,button,1342242816
Control7=IDC_MSCOMM1,{648A5600-2C6E-101B-82B6-000000000014},1342242816

