#pragma once
class CRmsCore
{
public:
    CRmsCore ();
    ~CRmsCore ();
    HRESULT Encrypt ( ULONG ulOffset, BYTE* pbData, ULONG cbData, ULONG* pcbData );
};

