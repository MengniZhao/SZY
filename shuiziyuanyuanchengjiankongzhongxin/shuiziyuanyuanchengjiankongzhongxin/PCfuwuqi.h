#pragma once
#include "afxwin.h"
#include"windows.h"
#include "afxcmn.h"
#include "mschart1.h"
#include "MSChart.h"
#include "CDMSChart.h"
#include "CVcPlot.h"  
#include "CVcAxis.h"  
#include "CVcValueScale.h"  
#include "CVcSeriesCollection.h"  
#include "CVcSeries.h"  
#include "CVcPen.h"  
#include "CVcCategoryScale.h"  
#include "CVcColor.h"  
#include "CVcDataGrid.h"  
#include "CVcBackdrop.h"  
#include "CVcFill.h"  
#include "CVcBrush.h"  
#include "CVcDataPoints.h"  
#include "CVcDataPoint.h"  
#include "CVcDataPointLabel.h"  
#include "CVcAxisTitle.h" 
#include "CVcTitle.h"
#include "CVcFont.h"
#include "CVcLegend.h"
#include "CVcMarker.h"
#include "CVcLabels.h"
#include "CVcLabel.h"
#include "CVcSeriesMarker.h"
#include "CVcTextLayout.h"



// PCfuwuqi �Ի���


class PCfuwuqi : public CDialogEx
{
	DECLARE_DYNAMIC(PCfuwuqi)

public:
	PCfuwuqi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~PCfuwuqi();

// �Ի�������
	enum { IDD = IDD_PCfuwuqi_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	
	void TCPClient(SOCKET sock);
	
private:

	
public:
	afx_msg void OnBnClickedButton1();
	
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit6();
	
	CString EDIT3;
	CString EDIT4;
	CString EDIT5;
	CString EDIT6;
	afx_msg void OnBnClickedButton2();
	

   CMschart1 chart1;
	
	void InitMschart1();
	void InitSOCKET();

	
	
	CEdit EDIT33;
	CEdit EDIT44;
	CEdit EDIT55;
	CEdit EDIT66;
	
	static DWORD WINAPI ThreadB1(LPVOID lpParam);
	static DWORD WINAPI ThreadB2(LPVOID lpParam);
	static DWORD WINAPI ThreadB3(LPVOID lpParam);
	static DWORD WINAPI ThreadB4(LPVOID lpParam);
	friend DWORD WINAPI ThreadB5(LPVOID lpParam);
	
	CString str1;
	CString result1;
	CString result2;
	CString result3;
	CString result4;

	CEdit EDIT1;
	CString EDIT11;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedCancel();
};
