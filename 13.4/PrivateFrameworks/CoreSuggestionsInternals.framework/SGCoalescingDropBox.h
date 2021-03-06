//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SGCoalescingDropBox : NSObject
{
    const char *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _makeEmptyBox;
    CDUnknownBlockType _handler;
    id _box;
    struct _opaque_pthread_mutex_t _handlerLock;
    struct _opaque_pthread_mutex_t _boxLock;
    int _outstanding;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (void)wait;
- (void)updateBox:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)updateBox:(CDUnknownBlockType)arg1;
- (void)typeCheckingSink:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(const char *)arg1 boxMaker:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3 qos:(unsigned int)arg4;

@end

