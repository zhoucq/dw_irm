#include "IrmPolicyInfoRMS.h"
#include "Debug\msoirmprotector.tlh"

CIrmPolicyInfoRMS::CIrmPolicyInfoRMS ()
{
}

CIrmPolicyInfoRMS::~CIrmPolicyInfoRMS ()
{
}

HRESULT CIrmPolicyInfoRMS::QueryInterface ( const IID &riid, void **ppvObj )
{
    if ( riid == IID_IUnknown || riid == __uuidof ( MsoIrmProtectorLib::I_IrmPolicyInfoRMS ) )
    {
        *ppvObj = ( I_IrmPolicyInfoRMS* ) this;
        AddRef ();
        return S_OK;
    }
    *ppvObj = 0;
    return E_NOINTERFACE;
}

ULONG CIrmPolicyInfoRMS::AddRef ()
{
    return ++m_uRefCount;
}

ULONG CIrmPolicyInfoRMS::Release ()
{
    if ( --m_uRefCount != 0 )
        return m_uRefCount;
    delete this;
    return 0;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetICrypt ( MsoIrmProtectorLib::I_IrmCrypt ** piic )
{
    HRESULT hr = S_OK;
    /*if ( NULL == piic )
    {
    hr = E_INVALIDARG;
    goto LEXIT;
    }*/
    MsoIrmProtectorLib::I_IrmCrypt *pIrmCrypt = new CIrmCrypt ();
    piic = &pIrmCrypt;
    // hr = pIrmCrypt->QueryInterface ( __uuidof( MsoIrmProtectorLib::I_IrmCrypt ), (void**) piic );

LEXIT:
    /*if ( NULL != pIrmCrypt )
    {
    delete pIrmCrypt;
    pIrmCrypt = NULL;
    }*/
    return hr;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetSignedIL ( BSTR * pbstrIL )
{
    HRESULT hr = S_OK;
    if ( NULL == pbstrIL )
    {
        return E_INVALIDARG;
    }

    *pbstrIL = m_bstrIL;
    return hr;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetServerId ( BSTR * pbstrServerId )
{
    // ·µ»Ø¼ÙµÄId
    *pbstrServerId = L"testuser1@doc.lab";
    return S_OK;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetEULs ( BSTR * rgbstrEUL, BSTR * rgbstrId, unsigned int * pcbEULs )
{
    return E_NOTIMPL;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrSetSignedIL ( BSTR bstrIL )
{
    HRESULT hr = S_OK;
    if ( NULL == bstrIL )
    {
        return E_INVALIDARG;
    }

    m_bstrIL = bstrIL;
    return hr;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrSetServerEUL ( BSTR bstrEUL )
{
    return E_NOTIMPL;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetRightsTemplate ( BSTR *pbstrRightsTemplate )
{
    return E_NOTIMPL;
}

HRESULT __stdcall CIrmPolicyInfoRMS::raw_HrGetListGuid ( BSTR *pbstrListGuid )
{
    return E_NOTIMPL;
}