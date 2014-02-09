#pragma once
#include "Debug\msoirmprotector.tlh"
#include "..\rms_core\RmsCore.h"
#define     BLOCKSIZE   16

class CIrmCrypt : public MsoIrmProtectorLib::I_IrmCrypt
{
public:
    CIrmCrypt ();
    ~CIrmCrypt ();

public:
    __override HRESULT __stdcall QueryInterface (
        const IID &riid,
        void  **ppvObj );
    __override ULONG   __stdcall AddRef ();
    __override ULONG   __stdcall Release ();

public:
    __override HRESULT __stdcall raw_HrGetBlockSize ( ULONG *pdwBlockSize );
    __override HRESULT __stdcall raw_HrEncrypt ( unsigned long ulOffset,
                                                 unsigned char * pbData,
                                                 unsigned long cbData,
                                                 unsigned long * pcbData );
    __override HRESULT __stdcall raw_HrDecrypt ( unsigned long ulOffset,
                                                 unsigned char * pbData,
                                                 unsigned long cbData,
                                                 unsigned long * pcbData );
    __override HRESULT __stdcall raw_HrEncode ( unsigned short * wszAlgID,
                                                unsigned int uDataLen,
                                                unsigned char * pbDecodedData,
                                                unsigned int * puEncodedStringLen,
                                                unsigned short * wszEncodedString );
    __override HRESULT __stdcall raw_HrDecode ( unsigned short * wszAlgID,
                                                unsigned short * wszEncodedString,
                                                unsigned int * puDecodedDataLen,
                                                unsigned char * pbDecodedData );

private:
    ULONG                   m_uRefCount;
    CRmsCore                *cRmsCore;

};

