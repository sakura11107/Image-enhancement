; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMy02testView
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "02test.h"
LastPage=0

ClassCount=6
Class1=CMy02testApp
Class2=CMy02testDoc
Class3=CMy02testView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Class6=CBMPEdit
Resource2=IDD_ABOUTBOX

[CLS:CMy02testApp]
Type=0
HeaderFile=02test.h
ImplementationFile=02test.cpp
Filter=N
LastObject=CMy02testApp

[CLS:CMy02testDoc]
Type=0
HeaderFile=02testDoc.h
ImplementationFile=02testDoc.cpp
Filter=N

[CLS:CMy02testView]
Type=0
HeaderFile=02testView.h
ImplementationFile=02testView.cpp
Filter=C
BaseClass=CScrollView
VirtualFilter=VWC
LastObject=ID_FILE_OPEN


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_FILE_OPEN




[CLS:CAboutDlg]
Type=0
HeaderFile=02test.cpp
ImplementationFile=02test.cpp
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
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_STATUS_BAR
Command15=ID_APP_ABOUT
CommandCount=15

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[CLS:CBMPEdit]
Type=0
HeaderFile=BMPEdit.h
ImplementationFile=BMPEdit.cpp
BaseClass=generic CWnd
Filter=W
LastObject=CBMPEdit

