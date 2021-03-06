//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TransportTypeRequestInfoProvider-Protocol.h"

@class DrivePreferences, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface DrivingRequestInfoProvider : NSObject <TransportTypeRequestInfoProvider>
{
    DrivePreferences *_drivePreferences;
    NSNumber *_maximumRouteCountOverride;
}

+ (id)userDefaultsInfoProvider;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *maximumRouteCountOverride; // @synthesize maximumRouteCountOverride=_maximumRouteCountOverride;
@property(readonly, nonatomic) DrivePreferences *drivePreferences; // @synthesize drivePreferences=_drivePreferences;
@property(readonly, nonatomic) unsigned long long maximumRouteCount;
- (void)updateWithRefinedWaypoints:(id)arg1;
- (id)makeRouteAttributesBuilderWithNavigationMode:(unsigned long long)arg1;
- (id)initWithDrivePreferences:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

