//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCPPTTodayContentDescriptor, NSString;

@protocol FCPPTContext <NSObject>
@property(nonatomic, getter=isPrefetchDisabled) _Bool prefetchDisabled;
@property(retain, nonatomic) NSString *forYouFeedIDOverride;
@property(retain, nonatomic) FCPPTTodayContentDescriptor *todayContentDescriptor;
@property(nonatomic, getter=isRunningPPT) _Bool runningPPT;
@property(retain, nonatomic) NSString *testName;
- (void)d_logState;
@end

