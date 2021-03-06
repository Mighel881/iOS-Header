//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTSTimer : NSObject
{
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _paused;
}

- (void)clearQueue;
- (void)continueQueue;
- (void)_startTimer:(id)arg1;
- (void)pauseQueue;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 withDelay:(double)arg2 withId:(long long)arg3;
- (void)_handleTimerFired;
- (void)_createTimer;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;

@end

