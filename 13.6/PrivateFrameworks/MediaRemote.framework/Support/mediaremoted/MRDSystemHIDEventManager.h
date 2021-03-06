//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDHIDEventManager.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface MRDSystemHIDEventManager : MRDHIDEventManager
{
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)dealloc;
- (id)init;

@end

