//
//  AffirmConstants.h
//  AffirmSDK
//
//  Created by Victor Zhu on 2019/3/14.
//  Copyright © 2019 Affirm, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0

FOUNDATION_EXPORT NSErrorDomain const AffirmSDKErrorDomain;

#else

FOUNDATION_EXPORT NSString *const AffirmSDKErrorDomain;

#endif

FOUNDATION_EXPORT NSString *const AFFIRM_CHECKOUT_CONFIRMATION_URL;
FOUNDATION_EXPORT NSString *const AFFIRM_CHECKOUT_CANCELLATION_URL;
FOUNDATION_EXPORT NSString *const AFFIRM_PREQUAL_REFERRING_URL;
FOUNDATION_EXPORT NSString *const AFFIRM_JS_URL;
FOUNDATION_EXPORT NSString *const AFFIRM_SANDBOX_JS_URL;

typedef NS_ENUM(NSInteger, AffirmEnvironment) {
    AffirmEnvironmentProduction,
    AffirmEnvironmentSandbox
};

NS_ASSUME_NONNULL_END
