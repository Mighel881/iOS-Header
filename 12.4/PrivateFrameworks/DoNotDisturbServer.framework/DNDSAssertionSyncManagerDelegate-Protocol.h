//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSDate;
@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDelegate <NSObject>
- (void)syncManager:(id <DNDSAssertionSyncManager>)arg1 invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg2 forReason:(unsigned long long)arg3;
@end

