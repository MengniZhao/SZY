// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类
#include "stdafx.h"
//#import "F:\\三华讲解\\20170215\\mschart图表ocx\\MSCHRT20.OCX" no_namespace
// CVcSeries 包装器类

class CVcSeries : public COleDispatchDriver
{
public:
	CVcSeries(){} // 调用 COleDispatchDriver 默认构造函数
	CVcSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcSeries(const CVcSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IVcSeries 方法
public:
	CString get__LegendText()
	{
		CString result;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put__LegendText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_SecondaryAxis()
	{
		BOOL result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SecondaryAxis(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SeriesType()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SeriesType(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_GuideLinePen()
	{
		LPDISPATCH result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL get_ShowLine()
	{
		BOOL result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_ShowLine(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_Pen()
	{
		LPDISPATCH result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Position()
	{
		LPDISPATCH result;
		InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_SeriesMarker()
	{
		LPDISPATCH result;
		InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_StatLine()
	{
		LPDISPATCH result;
		InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_DataPoints()
	{
		LPDISPATCH result;
		InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_LegendText()
	{
		CString result;
		InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_LegendText(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void Select()
	{
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_ShowGuideLine(long axisID)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, parms, axisID);
		return result;
	}
	void put_ShowGuideLine(long axisID, BOOL newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_BOOL;
		InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, axisID, newValue);
	}
	long get_TypeByChartType(long chartType)
	{
		long result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, chartType);
		return result;
	}

	// IVcSeries 属性
public:

};
