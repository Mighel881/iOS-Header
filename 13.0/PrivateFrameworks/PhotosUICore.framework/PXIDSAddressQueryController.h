//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class IDSBatchIDQueryController, NSMutableArray, NSMutableDictionary, NSString;

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate>
{
    NSMutableDictionary *_queryStateForAddress;
    NSMutableArray *_queries;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)performBatchQueryForAddresses:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

