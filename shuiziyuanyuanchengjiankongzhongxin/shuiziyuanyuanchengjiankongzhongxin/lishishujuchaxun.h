#pragma once
#include "afxwin.h"


// lishishujuchaxun �Ի���

class lishishujuchaxun : public CDialogEx
{
	DECLARE_DYNAMIC(lishishujuchaxun)

public:
	lishishujuchaxun(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~lishishujuchaxun();

// �Ի�������
	enum { IDD = IDD_lishishujuchaxun_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox combobox1;
	CString combobox11;
	virtual BOOL OnInitDialog();
	afx_msg void OnEnChangeEdit1();
	CString EDIT1;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLbnSelchangeList1();
	CListBox LIST1;
};
