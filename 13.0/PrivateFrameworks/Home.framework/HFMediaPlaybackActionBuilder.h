//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFActionBuilder.h>

@class HFPlaybackArchive, HMMediaPlaybackAction, NSNumber, NSSet, NSString;

@interface HFMediaPlaybackActionBuilder : HFActionBuilder
{
    NSSet *_mediaProfiles;
    long long _targetPlayState;
    NSNumber *_targetVolume;
    HFPlaybackArchive *_playbackArchive;
    NSSet *_accessories;
}

+ (Class)homeKitRepresentationClass;
@property(copy, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) HFPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(retain, nonatomic) NSNumber *targetVolume; // @synthesize targetVolume=_targetVolume;
@property(nonatomic) long long targetPlayState; // @synthesize targetPlayState=_targetPlayState;
@property(copy, nonatomic) NSSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
- (void).cxx_destruct;
- (id)commitItem;
- (id)_performValidation;
- (_Bool)isMediaActionValid:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (id)copyForCreatingNewAction;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (id)mediaProfileContainersForAccessories:(id)arg1 home:(id)arg2;
- (id)createNewAction;
- (_Bool)requiresDeviceUnlock;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) HMMediaPlaybackAction *action; // @dynamic action;

@end

