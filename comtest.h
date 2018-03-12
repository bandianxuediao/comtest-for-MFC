// comtest.h : main header file for the COMTEST application
//

#if !defined(AFX_COMTEST_H__13E25419_6412_4D40_A1A9_9856DEE7730E__INCLUDED_)
#define AFX_COMTEST_H__13E25419_6412_4D40_A1A9_9856DEE7730E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CComtestApp:
// See comtest.cpp for the implementation of this class
//

class CComtestApp : public CWinApp
{
public:
	CComtestApp();

	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComtestApp)
public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	// Implementation

	//{{AFX_MSG(CComtestApp)
	// NOTE - the ClassWizard will add and remove member functions here.
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMTEST_H__13E25419_6412_4D40_A1A9_9856DEE7730E__INCLUDED_)
