//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CUActivatable
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)invalidate;
- (void)activateWithCompletion:(void (^)(NSError *))arg1;
@end

