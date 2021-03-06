//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "PSDSchedulerObserver-Protocol.h"

@class NSMutableDictionary, NSString, PSDSchedulerAWDSessionState;
@protocol OS_dispatch_queue;

@interface PSDSchedulerAWDLogger : NSObject <NSSecureCoding, PSDSchedulerObserver>
{
    NSMutableDictionary *_cumulativeStatisticsCollections;
    NSMutableDictionary *_segmentStartingStatisticsCollections;
    PSDSchedulerAWDSessionState *_sessionState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultLogger;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) PSDSchedulerAWDSessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)accumulateStatisticsForSegment:(id)arg1;
- (void)bookmarkCurrentStatistics:(id)arg1;
- (id)AWDKeyForActivityIdentifier:(id)arg1;
- (void)logAWDDurationsForSync;
- (void)clearSessionState;
- (void)saveSessionState;
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

