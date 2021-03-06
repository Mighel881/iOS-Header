//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
    CDUnknownBlockType _creationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(CDUnknownBlockType)arg4;

@end

