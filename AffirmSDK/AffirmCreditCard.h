//
//  AffirmCreditCard.h
//  AffirmSDK
//
//  Created by Paul on 3/18/19.
//  Copyright © 2019 Affirm, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AffirmCreditCardBillAddress : NSObject

/**
 City.
 */
@property (nonatomic, copy, readonly, nullable) NSString *city;

/**
 State.
 */
@property (nonatomic, copy, readonly, nullable) NSString *state;

/**
 ZIP code.
 */
@property (nonatomic, copy, readonly, nullable) NSString *zipCode;

/**
 Address line 1.
 */
@property (nonatomic, copy, readonly, nullable) NSString *line1;

/**
 Address line 2.
 */
@property (nonatomic, copy, readonly, nullable) NSString *line2;

/**
 Initializer. See properties for more details.

 @param dict Data dictionary.
 @return The initialized bill address.
 */
- (instancetype)initWithDict: (NSDictionary *)dict;

@end

@interface AffirmCreditCard : NSObject

/**
 Billing Address. Optional
 */
@property (nonatomic, strong, readonly, nullable) AffirmCreditCardBillAddress *billingAddress;

/**
 Checkout Token. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *checkoutToken;

/**
 Create Date. Optional
 */
@property (nonatomic, copy, readonly, nullable) NSString *created;

/**
 Card CVV. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *cvv;

/**
 Card number. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *number;

/**
 Call back id. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *callbackId;

/**
 Card holder name. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *cardholderName;

/**
 Card expiration. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *expiration;

/**
 id. Required
 */
@property (nonatomic, copy, readonly, nonnull) NSString *creditCardId;

/**
 Convenience constructor for a credit card object with dictionary data.

 @param dict Data dictionary.
 @return The initialized credit card info.
 */
+ (AffirmCreditCard *)creditCardWithDict: (NSDictionary *)dict
NS_SWIFT_NAME(creditCard(dict:));

/**
 Initializer. See properties for more details.

 @param dict Data dictionary.
 @return The initialized credit card info.
 */
- (instancetype)initWithDict: (NSDictionary *)dict
NS_SWIFT_NAME(init(dict:));

@end

NS_ASSUME_NONNULL_END
