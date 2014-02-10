#include "stdafx.h"

#include "IrmWrapper.h"
#include "Debug\msoirmprotector.tlh"
#include "IrmCrypt.h"
#include "IrmPolicyInfoRMS.h"
CIrmWrapper::CIrmWrapper ()
{
    CoInitialize ( NULL ); 
    
    m_pMsoIrmProtector.CoCreateInstance ( __uuidof( MsoIrmProtectorLib::MsoIrmProtector ) );
    m_pOpcIrmProtector.CoCreateInstance ( __uuidof( OpcIrmProtectorLib::OpcIrmProtector ) );
}


CIrmWrapper::~CIrmWrapper ()
{
    m_pMsoIrmProtector.Release ( );
    m_pOpcIrmProtector.Release ( );
    CoUninitialize ( );
}

HRESULT CIrmWrapper::Encrypt ()
{
    HRESULT hr = S_OK;
    ILockBytes *pilbF;
    return E_NOTIMPL;
}