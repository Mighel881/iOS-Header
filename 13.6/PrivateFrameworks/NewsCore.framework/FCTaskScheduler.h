//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCTaskScheduler : NSObject
{
}

+ (void)disableOptionalPrefetching;
+ (void)executeOptionalPrefetchBlock:(CDUnknownBlockType)arg1;
+ (void)scheduleOptionalPrefetchBlock:(CDUnknownBlockType)arg1;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)popHighPriorityTaskInFlight;
+ (void)pushHighPriorityTaskInFlight;
+ (id)backgroundDownloadOperationQueue;
+ (id)lowPriorityOperationQueue;
+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityOperation:(id)arg1;
+ (void)scheduleLowPriorityBlockForMainThread:(CDUnknownBlockType)arg1;
+ (void)scheduleLowPriorityBlock:(CDUnknownBlockType)arg1;

@end

