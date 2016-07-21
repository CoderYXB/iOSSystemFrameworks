//
//  LAPublicDefines.h
//  LocalAuthentication
//
//  Copyright (c) 2014 Apple. All rights reserved.
//

// 一些公用的宏定义
#ifndef LocalAuthentication_LAPublicDefines_h
#define LocalAuthentication_LAPublicDefines_h

// Policies
#define kLAPolicyDeviceOwnerAuthenticationWithBiometrics    1
#define kLAPolicyDeviceOwnerAuthentication                  2

// Options
#define kLAOptionUserFallback                               1
#define kLAOptionAuthenticationReason                       2

// Error codes
#define kLAErrorAuthenticationFailed                       -1
#define kLAErrorUserCancel                                 -2
#define kLAErrorUserFallback                               -3
#define kLAErrorSystemCancel                               -4
#define kLAErrorPasscodeNotSet                             -5
#define kLAErrorTouchIDNotAvailable                        -6
#define kLAErrorTouchIDNotEnrolled                         -7
#define kLAErrorTouchIDLockout                             -8
#define kLAErrorAppCancel                                  -9
#define kLAErrorInvalidContext                            -10

// Error domain
// 错误域
#define kLAErrorDomain        "com.apple.LocalAuthentication"

#endif
