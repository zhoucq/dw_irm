#include "IrmCrypt.h"


CIrmCrypt::CIrmCrypt ()
{
}


CIrmCrypt::~CIrmCrypt ()
{
}

HRESULT CIrmCrypt::QueryInterface ( const IID &riid, void **ppvObj )
{
    if ( riid == IID_IUnknown || riid == __uuidof ( MsoIrmProtectorLib::I_IrmCrypt ) )
    {
        *ppvObj = ( I_IrmCrypt* ) this;
        AddRef ();
        return S_OK;
    }
    *ppvObj = 0;
    return E_NOINTERFACE;
}


ULONG CIrmCrypt::AddRef ()
{
    return ++m_uRefCount;
}

ULONG CIrmCrypt::Release ()
{
    if ( --m_uRefCount != 0 )
        return m_uRefCount;
    delete this;
    return 0;
}

HRESULT CIrmCrypt::raw_HrGetBlockSize ( ULONG *pdwBlockSize )
{
    if ( NULL == pdwBlockSize )
    {
        return E_INVALIDARG;
    }
    *pdwBlockSize = BLOCKSIZE;
    return S_OK;
}