//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCCoreAnalytics : NSObject
{
    NSString *_lastActionTaken;
    long long _lastActionLatency;
}

+ (void)logEventForChatSuggestDidNotAppearForBizItem:(id)arg1 error:(id)arg2 isVisible:(_Bool)arg3 isMessageable:(_Bool)arg4 latency:(long long)arg5;
+ (void)logEventForView:(id)arg1 bizItem:(id)arg2 bizItemReturnedAfterAction:(_Bool)arg3 latency:(long long)arg4;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long lastActionLatency; // @synthesize lastActionLatency=_lastActionLatency;
@property(retain, nonatomic) NSString *lastActionTaken; // @synthesize lastActionTaken=_lastActionTaken;
- (void)setLastActionTaken:(id)arg1 withLatency:(long long)arg2;

@end

