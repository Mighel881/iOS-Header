//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface CUTPowerMonitor : NSObject
{
    struct __CFRunLoopSource *_batteryRunLoopSource;
    struct IONotificationPort *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    struct IONotificationPort *_pmPort;
    unsigned int _pmNotifier;
    NSHashTable *_delegates;
    double _currentLevel;
    _Bool _isExternalPowerConnected;
}

+ (id)sharedInstance;
@property(nonatomic, setter=setExternalPowerConnected:) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double batteryPercentRemaining;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)_initIOService;
- (id)_init;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void *)arg2;

@end

