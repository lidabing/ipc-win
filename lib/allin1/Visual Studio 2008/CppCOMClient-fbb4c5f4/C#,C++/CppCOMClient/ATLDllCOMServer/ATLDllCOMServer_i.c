

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Tue Dec 13 10:20:27 2011
 */
/* Compiler settings for .\ATLDllCOMServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISimpleObject,0x830F85D0,0x91B9,0x406D,0xA2,0x73,0xBC,0x33,0x13,0x3D,0xD4,0x4B);


MIDL_DEFINE_GUID(IID, LIBID_ATLDllCOMServerLib,0x9B23EFED,0xA0C1,0x46B6,0xA9,0x03,0x21,0x82,0x06,0x44,0x7F,0x3E);


MIDL_DEFINE_GUID(IID, DIID__ISimpleObjectEvents,0x87AD6FBC,0x8735,0x407C,0x97,0x58,0xC8,0x0B,0x48,0xC7,0x8E,0x7C);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleObject,0x92FCF37F,0xF6C7,0x4F8A,0xAA,0x09,0x1A,0x14,0xBA,0x11,0x80,0x84);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



