//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceArchiver-Protocol.h>

@class NSString;

@interface PKSharedPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>
{
}

+ (id)sharedPaymentWebServiceArchiver;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

