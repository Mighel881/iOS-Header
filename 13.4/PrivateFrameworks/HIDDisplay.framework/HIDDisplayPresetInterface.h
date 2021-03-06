//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HIDDisplay/HIDDisplayInterface.h>

@class NSArray, NSDictionary;

@interface HIDDisplayPresetInterface : HIDDisplayInterface
{
    NSDictionary *_usageElementMap;
    NSArray *_presets;
}

- (void).cxx_destruct;
@property(readonly) NSArray *presets; // @synthesize presets=_presets;
- (id)capabilities;
- (long long)getCurrentPresetIndex:(id *)arg1;
- (_Bool)setCurrentPresetIndex:(long long)arg1 error:(id *)arg2;
- (_Bool)setActivePresetIndex:(long long)arg1 error:(id *)arg2;
- (long long)getActivePresetIndex:(id *)arg1;
- (long long)getFactoryDefaultPresetIndex:(id *)arg1;
- (void)createPresets;
- (id)getHIDElementForUsage:(long long)arg1;
- (id)getHIDDevices;
- (_Bool)setupPresets;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)initWithMatching:(id)arg1;

@end

