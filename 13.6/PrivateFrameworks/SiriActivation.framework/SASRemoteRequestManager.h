//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFRemoteRequestWatcher, CMPocketStateManager, INUIAppIntentDeliverer;

@interface SASRemoteRequestManager : NSObject
{
    _Bool _hasPendingVoiceTriggerActivation;
    AFRemoteRequestWatcher *_remoteRequestWatcher;
    INUIAppIntentDeliverer *_currentAppIntentDeliverer;
    unsigned long long _currentVoiceTriggerRestriction;
    unsigned long long _pendingVoiceTriggerRestrictionCount;
    CMPocketStateManager *_pocketStateManager;
    long long _currentPocketState;
}

+ (id)new;
+ (id)manager;
- (void).cxx_destruct;
@property(nonatomic) long long currentPocketState; // @synthesize currentPocketState=_currentPocketState;
@property(retain, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property(nonatomic) _Bool hasPendingVoiceTriggerActivation; // @synthesize hasPendingVoiceTriggerActivation=_hasPendingVoiceTriggerActivation;
@property(nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount; // @synthesize pendingVoiceTriggerRestrictionCount=_pendingVoiceTriggerRestrictionCount;
@property(nonatomic) unsigned long long currentVoiceTriggerRestriction; // @synthesize currentVoiceTriggerRestriction=_currentVoiceTriggerRestriction;
@property(retain, nonatomic) INUIAppIntentDeliverer *currentAppIntentDeliverer; // @synthesize currentAppIntentDeliverer=_currentAppIntentDeliverer;
@property(retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher; // @synthesize remoteRequestWatcher=_remoteRequestWatcher;
- (_Bool)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)arg1;
- (void)_handleRemoteRequestDismissalWithReason:(long long)arg1 options:(unsigned long long)arg2 analyticsContext:(id)arg3;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)arg1 delay:(double)arg2;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)arg1;
- (void)_handleNewRemoteRequestWithInfo:(id)arg1;
- (void)_handleRemotePrewarmWithInfo:(id)arg1;
- (id)init;
- (id)_init;

@end

