#pragma once
#include <comdef.h>
class CIrmWrapper
{
public:
    CIrmWrapper ();
    ~CIrmWrapper ();

    HRESULT Encrypt ();
};

