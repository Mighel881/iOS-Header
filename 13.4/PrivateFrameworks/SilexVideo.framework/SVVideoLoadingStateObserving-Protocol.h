//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSError;

@protocol SVVideoLoadingStateObserving <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock;
@property(copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock;
@property(copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock;
@property(readonly, nonatomic) unsigned long long state;
@end

