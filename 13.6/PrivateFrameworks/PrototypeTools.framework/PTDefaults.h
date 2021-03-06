//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain
{
}

+ (id)sharedInstance;
- (id)_testRecipeDefaults;
- (id)_eventDefaults;
- (_Bool)_eventShowsUI:(long long)arg1;
- (id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)prototypingServerWantsEvent:(long long)arg1;
- (id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)deactivateTestRecipe;
- (id)activeTestRecipeEventDescription;
- (_Bool)activeTestRecipeEatsEvent:(long long)arg1;
- (id)activeTestRecipeDescription;
- (id)activeTestRecipeIdentifier;
- (_Bool)testRecipeIsActive;
- (id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setShowsUI:(_Bool)arg1 forEvent:(long long)arg2;
- (_Bool)displayedShowsUIValueForEvent:(long long)arg1;
- (_Bool)canEditShowsUIForEvent:(long long)arg1;
- (void)_bindAndRegisterDefaults;

// Remaining properties
@property(nonatomic) _Bool activePrototypingEnabled; // @dynamic activePrototypingEnabled;
@property(nonatomic) _Bool prototypeSettingsEnabled; // @dynamic prototypeSettingsEnabled;
@property(nonatomic) _Bool remotePrototypingEnabled; // @dynamic remotePrototypingEnabled;
@property(nonatomic) _Bool ringerSwitchShowsUI; // @dynamic ringerSwitchShowsUI;
@property(nonatomic) _Bool shouldClearPrototypeCachesForMigration; // @dynamic shouldClearPrototypeCachesForMigration;
@property(nonatomic) _Bool shouldClearSettingsArchivesForMigration; // @dynamic shouldClearSettingsArchivesForMigration;
@property(retain, nonatomic) NSString *testRecipeDescription; // @dynamic testRecipeDescription;
@property(nonatomic) _Bool testRecipeEatsRingerSwitch; // @dynamic testRecipeEatsRingerSwitch;
@property(nonatomic) _Bool testRecipeEatsVolumeDown; // @dynamic testRecipeEatsVolumeDown;
@property(nonatomic) _Bool testRecipeEatsVolumeUp; // @dynamic testRecipeEatsVolumeUp;
@property(retain, nonatomic) NSString *testRecipeIdentifier; // @dynamic testRecipeIdentifier;
@property(nonatomic) _Bool volumeDownShowsUI; // @dynamic volumeDownShowsUI;
@property(nonatomic) _Bool volumeUpShowsUI; // @dynamic volumeUpShowsUI;

@end

