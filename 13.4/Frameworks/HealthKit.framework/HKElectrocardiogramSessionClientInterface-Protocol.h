//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDate, NSError;

@protocol HKElectrocardiogramSessionClientInterface <NSObject>
- (void)clientRemote_didDetectEmergencyCallbackModeWithEndDate:(NSDate *)arg1;
- (void)clientRemote_didEndWithReason:(long long)arg1 error:(NSError *)arg2;
- (void)clientRemote_didDetectContactAtDate:(NSDate *)arg1;
@end

