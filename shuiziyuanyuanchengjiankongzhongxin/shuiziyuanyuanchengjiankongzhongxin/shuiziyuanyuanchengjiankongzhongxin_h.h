

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Apr 27 13:58:22 2018
 */
/* Compiler settings for shuiziyuanyuanchengjiankongzhongxin.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __shuiziyuanyuanchengjiankongzhongxin_h_h__
#define __shuiziyuanyuanchengjiankongzhongxin_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Ishuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__
#define __Ishuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__
typedef interface Ishuiziyuanyuanchengjiankongzhongxin Ishuiziyuanyuanchengjiankongzhongxin;

#endif 	/* __Ishuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__ */


#ifndef __shuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__
#define __shuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__

#ifdef __cplusplus
typedef class shuiziyuanyuanchengjiankongzhongxin shuiziyuanyuanchengjiankongzhongxin;
#else
typedef struct shuiziyuanyuanchengjiankongzhongxin shuiziyuanyuanchengjiankongzhongxin;
#endif /* __cplusplus */

#endif 	/* __shuiziyuanyuanchengjiankongzhongxin_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __shuiziyuanyuanchengjiankongzhongxin_LIBRARY_DEFINED__
#define __shuiziyuanyuanchengjiankongzhongxin_LIBRARY_DEFINED__

/* library shuiziyuanyuanchengjiankongzhongxin */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_shuiziyuanyuanchengjiankongzhongxin;

#ifndef __Ishuiziyuanyuanchengjiankongzhongxin_DISPINTERFACE_DEFINED__
#define __Ishuiziyuanyuanchengjiankongzhongxin_DISPINTERFACE_DEFINED__

/* dispinterface Ishuiziyuanyuanchengjiankongzhongxin */
/* [uuid] */ 


EXTERN_C const IID DIID_Ishuiziyuanyuanchengjiankongzhongxin;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("967D4C29-34A0-421C-A997-111CDDFB086E")
    Ishuiziyuanyuanchengjiankongzhongxin : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IshuiziyuanyuanchengjiankongzhongxinVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Ishuiziyuanyuanchengjiankongzhongxin * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IshuiziyuanyuanchengjiankongzhongxinVtbl;

    interface Ishuiziyuanyuanchengjiankongzhongxin
    {
        CONST_VTBL struct IshuiziyuanyuanchengjiankongzhongxinVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Ishuiziyuanyuanchengjiankongzhongxin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Ishuiziyuanyuanchengjiankongzhongxin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Ishuiziyuanyuanchengjiankongzhongxin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Ishuiziyuanyuanchengjiankongzhongxin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Ishuiziyuanyuanchengjiankongzhongxin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Ishuiziyuanyuanchengjiankongzhongxin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Ishuiziyuanyuanchengjiankongzhongxin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Ishuiziyuanyuanchengjiankongzhongxin_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_shuiziyuanyuanchengjiankongzhongxin;

#ifdef __cplusplus

class DECLSPEC_UUID("83317560-B27B-4498-84FD-F456421DC241")
shuiziyuanyuanchengjiankongzhongxin;
#endif
#endif /* __shuiziyuanyuanchengjiankongzhongxin_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


