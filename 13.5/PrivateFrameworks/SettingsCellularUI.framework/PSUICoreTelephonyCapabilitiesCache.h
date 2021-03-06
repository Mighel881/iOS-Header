//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientCapabilitiesDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_volteCapabilityDict;
    NSMutableDictionary *_volteCapabilityInfoDict;
    NSMutableDictionary *_volteEnabledDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *volteEnabledDict; // @synthesize volteEnabledDict=_volteEnabledDict;
@property(copy) NSMutableDictionary *volteCapabilityInfoDict; // @synthesize volteCapabilityInfoDict=_volteCapabilityInfoDict;
@property(retain) NSMutableDictionary *volteCapabilityDict; // @synthesize volteCapabilityDict=_volteCapabilityDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (_Bool)singleSimCanSetCapabilityVoLTE;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)capabilityEnabledVoLTE:(id)arg1;
- (void)fetchCapabilityEnabledVoLTE;
- (_Bool)canChangeVoLTESettingEnableStillProvisioning:(id)arg1;
- (_Bool)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (_Bool)canSetCapabilityVoLTE:(id)arg1;
- (void)fetchCanSetCapabilityVoLTE;
- (void)willEnterForeground;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

