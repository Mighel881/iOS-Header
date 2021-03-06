//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class FBWorkspaceEventQueueLock, NSString, NSTimer;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>
{
    NSTimer *_blockTimer;
    FBWorkspaceEventQueueLock *_queueLock;
}

+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) FBWorkspaceEventQueueLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSTimer *blockTimer; // @synthesize blockTimer=_blockTimer;
- (void)handleVolumeDecrease;
- (void)blockTimerDidFire:(id)arg1;
- (void)handleVolumeIncrease;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

