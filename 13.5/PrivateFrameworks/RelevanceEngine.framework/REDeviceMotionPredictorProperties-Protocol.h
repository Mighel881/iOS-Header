//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class CMMotionActivityManager;

@protocol REDeviceMotionPredictorProperties <REExportedInterface>
@property(readonly) unsigned long long motionType;
@property(readonly, getter=isStationary) _Bool stationary;
@property(readonly, nonatomic) CMMotionActivityManager *activityManager;
@end

