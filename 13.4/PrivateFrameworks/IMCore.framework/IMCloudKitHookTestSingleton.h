//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMSingletonOverride.h>

@class IMCloudKitMockSyncState, NSArray, NSDate, NSDictionary;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride
{
    IMCloudKitMockSyncState *_testState;
    _Bool _rampedIntoTruthZone;
    _Bool _isStartingSync;
    _Bool _isDisablingDevices;
    long long _isChangingEnabledState;
    unsigned long long _syncControllerSyncState;
    long long _syncType;
    NSDictionary *_syncStats;
}

+ (id)logHandle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *syncStats; // @synthesize syncStats=_syncStats;
@property(nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property(nonatomic) unsigned long long syncControllerSyncState; // @synthesize syncControllerSyncState=_syncControllerSyncState;
@property(nonatomic) _Bool isDisablingDevices; // @synthesize isDisablingDevices=_isDisablingDevices;
@property(nonatomic) _Bool isStartingSync; // @synthesize isStartingSync=_isStartingSync;
@property(nonatomic) long long isChangingEnabledState; // @synthesize isChangingEnabledState=_isChangingEnabledState;
@property(nonatomic) _Bool rampedIntoTruthZone; // @synthesize rampedIntoTruthZone=_rampedIntoTruthZone;
@property(retain, nonatomic) IMCloudKitMockSyncState *testState; // @synthesize testState=_testState;
@property(retain, nonatomic) NSArray *IMCloudKitSyncErrors;
- (void)setControllerSyncType:(long long)arg1;
- (void)setControllerSyncState:(unsigned long long)arg1;
- (void)setIsInExitState:(_Bool)arg1;
- (_Bool)isInExitState;
- (id)syncStateDictionary;
@property(retain, nonatomic) NSDate *lastSyncDate;
- (void)initiatePeriodicSync;
@property(nonatomic, getter=isSyncing) _Bool syncing;
@property(nonatomic) _Bool eligibleForTruthZone;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)sendSyncChangedEvent;
- (void)fetchSyncStateStatistics;
- (id)logHandle;
- (id)init;

@end

