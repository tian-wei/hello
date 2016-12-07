// testhelloDlg.h : header file
//

#if !defined(AFX_TESTHELLODLG_H__8C390E3B_EE8C_4BB0_B912_1408BBA11C9B__INCLUDED_)
#define AFX_TESTHELLODLG_H__8C390E3B_EE8C_4BB0_B912_1408BBA11C9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTesthelloDlg dialog

class CTesthelloDlg : public CDialog
{
// Construction
public:
	CTesthelloDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTesthelloDlg)
	enum { IDD = IDD_TESTHELLO_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTesthelloDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTesthelloDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTHELLODLG_H__8C390E3B_EE8C_4BB0_B912_1408BBA11C9B__INCLUDED_)
