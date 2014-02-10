// dw_irm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\irm_wrapper\IrmPolicyInfoRMS.h"
#include "..\irm_wrapper\IrmCrypt.h"
#include "..\irm_wrapper\IrmWrapper.h"

int _tmain ( int argc, _TCHAR* argv[] )
{
    HRESULT hr = S_OK;

    CIrmPolicyInfoRMS *pIrmPolicyInfoRMS = new CIrmPolicyInfoRMS ();
    CIrmCrypt *pIrmCrypt = new CIrmCrypt ();
    CIrmWrapper *pIrmWrapper = new CIrmWrapper ();
    hr = pIrmWrapper->Encrypt ();

    // pIrmPolicyInfoRMS->HrGetICrypt ()
    MsoIrmProtectorLib::MsoIrmProtector *msoIrmProtector;
    

    delete pIrmPolicyInfoRMS;
    delete pIrmCrypt;
    //   delete pIrmWrapper;
    return 0;
}

