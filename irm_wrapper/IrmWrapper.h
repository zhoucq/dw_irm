#pragma once
#include <comdef.h>
#include "Debug\msoirmprotector.tlh"
#include "Debug\opcirmprotector.tlh"
class CIrmWrapper
{
public:
    CIrmWrapper ( );
    ~CIrmWrapper ( );

    HRESULT Encrypt ( );

private:
    CComPtr<MsoIrmProtectorLib::I_IrmProtector> m_pMsoIrmProtector;
    CComPtr<OpcIrmProtectorLib::I_IrmProtector> m_pOpcIrmProtector;
};

