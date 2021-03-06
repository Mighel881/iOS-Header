//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSBiometricsSignatureResult, AMSPaymentSheetMetricsEvent, NSError, NSString;

__attribute__((visibility("hidden")))
@interface _PaymentSheetState : NSObject
{
    _Bool _didAuthorizePayment;
    _Bool _didBiometricLockout;
    _Bool _didPresent;
    NSError *_error;
    AMSPaymentSheetMetricsEvent *_event;
    NSString *_passwordEquivalentToken;
    NSString *_paymentToken;
    AMSBiometricsSignatureResult *_signatureResult;
}

@property(retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // @synthesize signatureResult=_signatureResult;
@property(retain, nonatomic) NSString *paymentToken; // @synthesize paymentToken=_paymentToken;
@property(retain, nonatomic) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property(retain, nonatomic) AMSPaymentSheetMetricsEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
@property(nonatomic) _Bool didBiometricLockout; // @synthesize didBiometricLockout=_didBiometricLockout;
@property(nonatomic) _Bool didAuthorizePayment; // @synthesize didAuthorizePayment=_didAuthorizePayment;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)init;

@end

