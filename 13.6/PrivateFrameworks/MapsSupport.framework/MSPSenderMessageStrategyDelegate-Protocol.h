//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPSharedTripNotificationRules, NSString;

@protocol MSPSenderMessageStrategyDelegate <NSObject>
- (void)touchedRules;
- (MSPSharedTripNotificationRules *)rulesForParticipant:(NSString *)arg1;
- (void)sendMessage:(NSString *)arg1 toParticipant:(NSString *)arg2;
@end

