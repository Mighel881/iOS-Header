//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXSubscriptionStatusObserving;

@protocol SXSubscriptionStatusProviding <NSObject>
@property(readonly, nonatomic) long long channelSubscriptionStatus;
@property(readonly, nonatomic) long long bundleSubscriptionStatus;
- (void)removeObserver:(id <SXSubscriptionStatusObserving>)arg1;
- (void)addObserver:(id <SXSubscriptionStatusObserving>)arg1;
@end

