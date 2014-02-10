#pragma once
#include "Debug\msoirmprotector.tlh"
#include "IrmCrypt.h"

class CIrmPolicyInfoRMS :
    public MsoIrmProtectorLib::I_IrmPolicyInfoRMS
{
public:
    CIrmPolicyInfoRMS ();
    ~CIrmPolicyInfoRMS ();

public:
    __override HRESULT __stdcall QueryInterface ( const IID &riid,
                                                  void **ppvObject );
    __override ULONG __stdcall AddRef ( void );
    __override ULONG __stdcall Release ( void );

public:
    __override HRESULT __stdcall raw_HrGetICrypt ( MsoIrmProtectorLib::I_IrmCrypt **piic );
    __override HRESULT __stdcall raw_HrGetSignedIL ( BSTR *pbstrIL );
    __override HRESULT __stdcall raw_HrGetServerId ( BSTR *pbstrServerId );
    __override HRESULT __stdcall raw_HrGetEULs ( BSTR *rgbstrEUL, BSTR *rgbstrId, unsigned int *pcbEULs );
    __override HRESULT __stdcall raw_HrSetSignedIL ( BSTR bstrIL );
    __override HRESULT __stdcall raw_HrSetServerEUL ( BSTR bstrEUL );
    __override HRESULT __stdcall raw_HrGetRightsTemplate ( BSTR *pbstrRightsTemplate );
    __override HRESULT __stdcall raw_HrGetListGuid ( BSTR *pbstrListGuid );

private:
    ULONG       m_uRefCount = 0;

    BSTR        m_bstrIL;
};

