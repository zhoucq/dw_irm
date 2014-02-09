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

HRESULT CIrmCrypt::raw_HrEncrypt ( unsigned long ulOffset,
                                   unsigned char * pbData,
                                   unsigned long cbData,
                                   unsigned long * pcbData )
{
    // TODO: 需要实现raw_HrEncrypt方法 
    return E_NOTIMPL;
}

HRESULT CIrmCrypt::raw_HrDecrypt ( unsigned long ulOffset,
                                   unsigned char * pbData,
                                   unsigned long cbData,
                                   unsigned long * pcbData )
{
    // TODO: 需要实现raw_HrDecrypt方法 
    return E_NOTIMPL;
}

HRESULT CIrmCrypt::raw_HrEncode ( unsigned short * wszAlgID,
                                  unsigned int uDataLen,
                                  unsigned char * pbDecodedData,
                                  unsigned int * puEncodedStringLen,
                                  unsigned short * wszEncodedString )
{
    // TODO: 需要实现raw_HrDecrypt方法 
    return E_NOTIMPL;
}

HRESULT CIrmCrypt::raw_HrDecode ( unsigned short * wszAlgID,
                                  unsigned short * wszEncodedString,
                                  unsigned int * puDecodedDataLen,
                                  unsigned char * pbDecodedData )
{
    // TODO: 需要实现raw_HrDecode方法 
    return E_NOTIMPL;
}