
// shuiziyuanyuanchengjiankongzhongxinDlg.h : ͷ�ļ�
//

#pragma once

class CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy;


// CshuiziyuanyuanchengjiankongzhongxinDlg �Ի���
class CshuiziyuanyuanchengjiankongzhongxinDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CshuiziyuanyuanchengjiankongzhongxinDlg);
	friend class CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy;

// ����
public:
	CshuiziyuanyuanchengjiankongzhongxinDlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~CshuiziyuanyuanchengjiankongzhongxinDlg();

// �Ի�������
	enum { IDD = IDD_SHUIZIYUANYUANCHENGJIANKONGZHONGXIN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	CshuiziyuanyuanchengjiankongzhongxinDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();

private:
	

public:
	
	
	afx_msg void OnEnChangeEdit1();
};
