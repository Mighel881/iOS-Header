//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPeerPaymentTransactionMetadata;

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam
{
    PKPeerPaymentTransactionMetadata *_peerPaymentTransactionMetadata;
}

+ (id)paramWithPeerPaymentTransactionMetadata:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // @synthesize peerPaymentTransactionMetadata=_peerPaymentTransactionMetadata;
- (id)description;

@end

