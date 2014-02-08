#pragma once
#include "Debug\msoirmprotector.tlh"

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
    __override HRESULT __stdcall raw_HrGetBlockSize (
        ULONG *pdwBlockSize );

private:
    ULONG                   m_uRefCount;
};

