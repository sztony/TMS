// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "_line3dh.h"

/////////////////////////////////////////////////////////////////////////////
// C_Line3DH

IMPLEMENT_DYNCREATE(C_Line3DH, CWnd)

/////////////////////////////////////////////////////////////////////////////
// C_Line3DH properties

/////////////////////////////////////////////////////////////////////////////
// C_Line3DH operations

void C_Line3DH::ShowAbout()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

unsigned long C_Line3DH::GetForeColor()
{
	unsigned long result;
	InvokeHelper(0x68030003, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long C_Line3DH::GetLineStyle()
{
	long result;
	InvokeHelper(0x68030002, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long C_Line3DH::GetLinePosition()
{
	long result;
	InvokeHelper(0x68030001, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long C_Line3DH::GetBackColor()
{
	unsigned long result;
	InvokeHelper(0x68030000, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_Line3DH::SetForeColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030003, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void C_Line3DH::SetLineStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030002, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void C_Line3DH::SetLinePosition(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030001, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void C_Line3DH::SetBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x68030000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}