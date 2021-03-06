//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsBaseLightMonitor.h"

@class GCDTimer;

__attribute__((visibility("hidden")))
@interface MapsAmbientLightMonitor : MapsBaseLightMonitor
{
    double *_sampleBuffer;
    unsigned long long _sampleBufferPosition;
    unsigned long long _sampleBufferLength;
    unsigned long long _sampleBufferCount;
    _Bool _isSunWaning;
    struct __IOHIDEventSystemClient *_client;
    long long _ambientLightLevel;
    GCDTimer *_updatePushTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCDTimer *updatePushTimer; // @synthesize updatePushTimer=_updatePushTimer;
@property(nonatomic) long long ambientLightLevel; // @synthesize ambientLightLevel=_ambientLightLevel;
@property(nonatomic) _Bool isSunWaning; // @synthesize isSunWaning=_isSunWaning;
- (void)_scheduleLightLevelUpdate;
- (void)_handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (long long)_computeLightLevel;
- (double)_calculateAverageSample;
- (void)_addSample:(double)arg1;
@property(nonatomic) struct __IOHIDEventSystemClient *client; // @synthesize client=_client;
- (void)_setMonitoring:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

