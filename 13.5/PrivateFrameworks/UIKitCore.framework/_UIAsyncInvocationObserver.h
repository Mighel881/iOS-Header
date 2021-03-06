//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    _Bool _suspendedPostCompletionQueue;
    _Bool _resumedPostCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)whenCompleteDo:(CDUnknownBlockType)arg1;
- (void)_didCompleteInvocation;
- (id)init;

@end

