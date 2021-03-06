//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider
{
    unsigned long long _displayStyle;
    NSSet *_cameraProfiles;
}

@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)initWithItems:(id)arg1;
- (id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2;

@end

