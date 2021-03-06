//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SYDServerManagementMessages-Protocol.h"
#import "SYDServerMessages-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableSet, SYDDeviceStateManager, SYDPerformBlock, SYDPushManager, SYDWriteTracker;
@protocol OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface SYDServer : NSObject <SYDServerMessages, SYDServerManagementMessages>
{
    NSMutableDictionary *_apps;
    NSMutableDictionary *_additionalStores;
    NSMutableDictionary *_appsByStoreIdentifier;
    NSMutableSet *_peers;
    NSMutableDictionary *_schedulers;
    SYDPushManager *_pushManager;
    SYDDeviceStateManager *_deviceStateManager;
    double _startupTime;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_source> *_mwSource;
    NSLock *_cloudLock;
    _Bool _needsSaving;
    _Bool _shuttingDown;
    _Bool _exitsBecauseOfIdle;
    _Bool _someSchedulerIsSynchronizing;
    _Bool _loggedWhoLaunchedUs;
    _Bool _tracksUsage;
    _Bool _tracksUsageInited;
    NSObject<OS_os_transaction> *_mainTransaction;
    SYDPerformBlock *_postExternalChangeNotificationRequest;
    SYDPerformBlock *_delayStoreIdentifiersRefresh;
    SYDPerformBlock *_storeAppsOnDiskRequest;
    int _isHandlingMemoryWarning;
    SYDWriteTracker *_writeTracker;
}

@property(readonly, nonatomic) SYDWriteTracker *writeTracker; // @synthesize writeTracker=_writeTracker;
@property(nonatomic) _Bool someSchedulerIsSynchronizing; // @synthesize someSchedulerIsSynchronizing=_someSchedulerIsSynchronizing;
@property(readonly, nonatomic) _Bool exitsBecauseOfIdle; // @synthesize exitsBecauseOfIdle=_exitsBecauseOfIdle;
- (void).cxx_destruct;
- (_Bool)isCloudSyncAllowedForApp:(id)arg1;
- (_Bool)_isCloudSyncAllowedForApp:(id)arg1 peer:(id)arg2;
- (void)_didReceiveMemoryWarning;
- (void)_createMemoryWarningSource;
- (void)_peerDisconnected:(id)arg1;
- (void)_peerConnected:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_handleNewConnection:(id)arg1;
- (void)_createListener;
- (void)_applicationDidChange:(id)arg1;
- (void)_postExternalChangeNotification:(id)arg1;
- (void)_cancelRequestForPostExternalChangeNotification;
- (void)_requestPostExternalChangeNotification;
- (void)setPersistentStateNeedsSaving;
- (void)_requestStoreAppsOnDiskImmediate:(_Bool)arg1;
- (void)shutdownWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool tracksUsage;
- (void)noteSchedulerIsIdle:(id)arg1;
- (void)noteSchedulerCancelWillIdle:(id)arg1;
- (void)noteSchedulerWillIdle:(id)arg1;
- (void)printDebugDescriptionWithMessage:(id)arg1;
- (void)allApplicationInfoWithMessage:(id)arg1;
- (void)migrateForceWithMessage:(id)arg1;
- (void)migrateWithMessage:(id)arg1;
- (void)migrateWithMessage:(id)arg1 force:(_Bool)arg2;
- (id)migrateApplication:(id)arg1 withBundleIdentifier:(id)arg2 force:(_Bool)arg3;
- (_Bool)migrateSyncedPreferencesFile:(id)arg1 additionalStoreName:(id)arg2 systemBase:(id)arg3 containerBase:(id)arg4 force:(_Bool)arg5;
- (void)deviceUnlockedSinceBootChange;
- (void)passwordChangeWithMessage:(id)arg1;
- (void)accountChangeWithMessage:(id)arg1;
- (void)pingWithMessage:(id)arg1;
- (void)getConfigurationWithMessage:(id)arg1;
- (void)discardJournalEntriesWithMessage:(id)arg1;
- (void)trackSynchronizeRemoteWithMessage:(id)arg1;
- (void)synchronizeRemoteWithMessage:(id)arg1;
- (void)helpWithMessage:(id)arg1;
- (void)shutdownWithMessage:(id)arg1;
- (void)simulatememorywarningWithMessage:(id)arg1;
- (void)resetwritetrackingWithMessage:(id)arg1;
- (void)disablewritetrackingWithMessage:(id)arg1;
- (void)enablewritetrackingWithMessage:(id)arg1;
- (void)resetusageWithMessage:(id)arg1;
- (void)usageWithMessage:(id)arg1;
- (void)enableusagetrackingWithMessage:(id)arg1;
- (void)disableusagetrackingWithMessage:(id)arg1;
- (void)enablethrottlingWithMessage:(id)arg1;
- (void)disablethrottlingWithMessage:(id)arg1;
- (void)disablefulljournalWithMessage:(id)arg1;
- (void)enablefulljournalWithMessage:(id)arg1;
- (void)disablesyncindicatorWithMessage:(id)arg1;
- (void)enablesyncindicatorWithMessage:(id)arg1;
- (void)serverlimitsWithMessage:(id)arg1;
- (void)setDefaultsConfigWithMessage:(id)arg1;
- (void)lastrequestWithMessage:(id)arg1;
- (void)statusWithMessage:(id)arg1;
- (void)refetchconfigurationWithMessage:(id)arg1;
- (void)resetupdatesWithMessage:(id)arg1;
- (void)resetappsWithMessage:(id)arg1;
- (_Bool)_enumerateSchedulersFromMessage:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)diagnoseappWithMessage:(id)arg1;
- (void)unregisterWithMessage:(id)arg1;
- (void)registerWithMessage:(id)arg1;
- (id)registeredApplicationsForStoreIdentifier:(id)arg1;
- (id)registeredApplications;
- (id)registeredApplicationsForScheduler:(id)arg1;
- (void)synchronizeWithMessage:(id)arg1;
- (void)endDebuggingApplicationWithBundleIdentifier:(id)arg1;
- (void)beginDebuggingApplicationWithBundleIdentifier:(id)arg1;
- (void)enumerateAppsWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAppsUsingBlock:(CDUnknownBlockType)arg1;
- (id)applicationForBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3;
- (void)_storeAppsOnDisk:(id)arg1;
- (void)_storeAppsOnDiskHelper:(id)arg1;
- (void)_loadAppsFromDisk;
- (void)_installedAppsDidChange;
- (void)_refreshStoreIdentifiers:(id)arg1;
- (void)_refreshStoreIdentifiersHelper:(id)arg1;
- (void)_appendApp:(id)arg1 new:(_Bool)arg2;
- (_Bool)isGlobalIdentifier:(id)arg1;
- (id)schedulerWithIdentifier:(id)arg1;
- (id)defaultScheduler;
- (void)noteScheduler:(id)arg1 receivedBackgroundJobNotification:(id)arg2;
- (void)noteScheduler:(id)arg1 receivedNotificationForStores:(id)arg2;
- (void)_logWhoLaunchedUsWithMessage:(id)arg1 administrativeMessage:(_Bool)arg2;
- (void)_logWhoLaunchedUs:(id)arg1 toScheduler:(id)arg2;
- (void)_noMessageReceived;
- (void)dealloc;
- (id)init;

@end

