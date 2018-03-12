// comtestDlg.h : header file
//
//{{AFX_INCLUDES()
#include "mscomm.h"
//}}AFX_INCLUDES

#if !defined(AFX_COMTESTDLG_H__880DEA1D_9BC4_4FBD_BA38_2B37579CB80D__INCLUDED_)
#define AFX_COMTESTDLG_H__880DEA1D_9BC4_4FBD_BA38_2B37579CB80D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CComtestDlg dialog

class CComtestDlg : public CDialog
{
	// Construction
public:
	CComtestDlg(CWnd* pParent = NULL);  // standard constructor

	// Dialog Data
	//{{AFX_DATA(CComtestDlg)
	enum { IDD = IDD_COMTEST_DIALOG };
	CButton m_BtnSend;
	CButton m_BtnOpen;
	m_Comm1 m_Comm1;
	CString m_EditRxData;
	CString m_EditTxData;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComtestDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CComtestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnOpen();
	afx_msg void OnBtnSend();
	afx_msg void OnOnCommMscomm1();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMTESTDLG_H__880DEA1D_9BC4_4FBD_BA38_2B37579CB80D__INCLUDED_)
