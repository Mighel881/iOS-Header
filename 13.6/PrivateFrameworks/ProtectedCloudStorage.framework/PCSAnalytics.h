//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/SFAnalytics.h>

@interface PCSAnalytics : SFAnalytics
{
}

+ (id)logger;
+ (id)databasePath;
- (id)dateOfLastSuccessForEvent:(id)arg1;
- (void)noteEvent:(id)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(id)arg1;

@end

