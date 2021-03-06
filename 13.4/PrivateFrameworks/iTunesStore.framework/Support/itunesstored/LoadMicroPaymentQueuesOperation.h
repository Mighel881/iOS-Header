//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueResponse, NSArray, NSDate, StoreKitClientIdentity;

@interface LoadMicroPaymentQueuesOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;
    NSDate *_lastQueueCheckDate;
    long long _reason;
    MicroPaymentQueueResponse *_paymentsResponse;
    NSArray *_userDSIDs;
}

- (void).cxx_destruct;
@property(copy) NSArray *userDSIDs; // @synthesize userDSIDs=_userDSIDs;
@property long long reason; // @synthesize reason=_reason;
@property(retain) MicroPaymentQueueResponse *paymentsResponse; // @synthesize paymentsResponse=_paymentsResponse;
- (id)_URLBagContext;
- (_Bool)_shouldCheckAutoRenewQueue;
- (_Bool)_appendToResponse:(id)arg1 usingOperation:(id)arg2 error:(id *)arg3;
- (_Bool)_appendNormalQueueToResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_appendAutoRenewQueueToResponse:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) NSDate *lastQueueCheckDate;
@property(copy) StoreKitClientIdentity *clientIdentity;

@end

