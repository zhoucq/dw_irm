#include "stdafx.h"
#include "RmsCore.h"


CRmsCore::CRmsCore ()
{
}


CRmsCore::~CRmsCore ()
{
}


HRESULT CRmsCore::Encrypt ( ULONG ulOffset, 
                            BYTE* pbData, 
                            ULONG cbData, 
                            ULONG* pcbData )
{
    HRESULT         hr = S_OK;
    
    if ( NULL == pbData || NULL == pcbData )
    {
        return E_INVALIDARG;
    }
    // TODO:  ��Ҫʵ��DRMEncrypt���� 

LEXIT:
    return hr;
}
