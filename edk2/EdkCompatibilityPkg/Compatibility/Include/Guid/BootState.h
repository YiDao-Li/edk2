/** @file
  GUID for use conveying the boot-state to PEI.

  Copyright (c) 2010, Intel Corporation
  All rights reserved. This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/
#ifndef _BOOT_STATE_H_
#define _BOOT_STATE_H_

#define  EFI_BOOT_STATE_VARIABLE_GUID  \
  { 0x60b5e939, 0xfcf, 0x4227, { 0xba, 0x83, 0x6b, 0xbe, 0xd4, 0x5b, 0xc0, 0xe3 } }

extern EFI_GUID gEfiBootStateGuid;

#endif
