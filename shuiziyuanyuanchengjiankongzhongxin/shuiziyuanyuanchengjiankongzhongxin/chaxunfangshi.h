#pragma once


// chaxunfangshi �Ի���

class chaxunfangshi : public CDialogEx
{
	DECLARE_DYNAMIC(chaxunfangshi)

public:
	chaxunfangshi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~chaxunfangshi();

// �Ի�������
	enum { IDD = IDD_chaxunfangshi_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	
};
