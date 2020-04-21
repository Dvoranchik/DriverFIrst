
// DriverTest1.h
// 04-06-2020 <MyName>
// Copyright © 2020 <MyCompany>

// =================================================================
// PROGRAM IDENTIFICATION
// =================================================================

#define DRV_BUILD           1
#define DRV_VERSION_HIGH    1
#define DRV_VERSION_LOW     0

// -----------------------------------------------------------------

#define DRV_DAY             06
#define DRV_MONTH           04
#define DRV_YEAR            2020

// -----------------------------------------------------------------
// Customize these settings by editing the configuration file
// C:\Users\UserOS\Desktop\ОС литература\Driver\Шрайбер - Недокументированные возможности Windows 2000\bin\w2k_wiz.ini

#define DRV_MODULE          DriverTest1
#define DRV_NAME            <SBS Windows 2000 Code Wizard Project>
#define DRV_COMPANY         <MyCompany>
#define DRV_AUTHOR          <MyName>
#define DRV_EMAIL           <my@email>
#define DRV_PREFIX          <MyPrefix>

// =================================================================
// HEADER FILES
// =================================================================

#include "DrvInfo.h"// defines more DRV_* items

////////////////////////////////////////////////////////////////////
#ifndef _RC_PASS_
////////////////////////////////////////////////////////////////////

// =================================================================
// CONSTANTS
// =================================================================

#define FILE_DEVICE_CUSTOM      0x8000

// =================================================================
// STRUCTURES
// =================================================================

typedef struct _DEVICE_CONTEXT
    {
    PDRIVER_OBJECT pDriverObject;
    PDEVICE_OBJECT pDeviceObject;
    }
    DEVICE_CONTEXT, *PDEVICE_CONTEXT, **PPDEVICE_CONTEXT;

#define DEVICE_CONTEXT_ sizeof (DEVICE_CONTEXT)

////////////////////////////////////////////////////////////////////
#endif // #ifndef _RC_PASS_
////////////////////////////////////////////////////////////////////

// =================================================================
// END OF FILE
// =================================================================
