//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKRecordZone, CKRecordZoneID, NSString;

__attribute__((visibility("hidden")))
@interface BRCCreateZoneAndSubscribeOperation : _BRCOperation <BRCOperationSubclass>
{
    CKRecordZoneID *_zoneID;
    _Bool _optimisticSubscribe;
    _Bool _subscriptionOnly;
    CDUnknownBlockType _createZoneAndSubscribeCompletionBlock;
    CKRecordZone *_createdZone;
}

@property(readonly, nonatomic) CKRecordZone *createdZone; // @synthesize createdZone=_createdZone;
@property(copy, nonatomic) CDUnknownBlockType createZoneAndSubscribeCompletionBlock; // @synthesize createZoneAndSubscribeCompletionBlock=_createZoneAndSubscribeCompletionBlock;
@property(nonatomic) _Bool subscriptionOnly; // @synthesize subscriptionOnly=_subscriptionOnly;
@property(nonatomic) _Bool optimisticSubscribe; // @synthesize optimisticSubscribe=_optimisticSubscribe;
- (void).cxx_destruct;
- (void)_registerSubscriptionForZoneID:(id)arg1 isOptimisticSubscribe:(_Bool)arg2;
- (void)_createZoneWithZoneID:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;
- (id)initWithSession:(id)arg1 zoneID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

