//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAssistantController;

@protocol SBAssistantObserver <NSObject>

@optional
- (void)assistantDidDisappear:(SBAssistantController *)arg1;
- (void)assistantWillDisappear:(SBAssistantController *)arg1;
- (void)assistantDidAppear:(SBAssistantController *)arg1;
- (void)assistantWillAppear:(SBAssistantController *)arg1;
@end

