//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject
{
    struct os_unfair_lock_s _lock;
    BSAtomicSignal *_submitted;
    NSThread *_submissionThread;
    CDUnknownBlockType _lock_workBlock;
    _Bool _lock_workCompletionWasCalled;
    UIImage *_postlock_cachedImage;
}

- (void).cxx_destruct;
- (id)cacheImage;
- (void)submitWorkBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

