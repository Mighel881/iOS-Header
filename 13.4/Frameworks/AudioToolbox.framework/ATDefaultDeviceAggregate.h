//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ATDefaultDeviceAggregate : NSObject
{
    shared_ptr_57118bb5 _impl;
}

+ (id)sharedDefaultDeviceAggregateNoInit;
+ (id)sharedDefaultDeviceAggregate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_57118bb5)impl;
- (id)outputStreamsToUse;
- (id)inputStreamsToUse;
- (id)_streamsToUse:(_Bool)arg1;
- (void)removeObserver:(int)arg1;
- (int)addObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *deviceUID;
@property(readonly, nonatomic) unsigned int deviceID;
- (id)init;
- (shared_ptr_4c923a7b)_state;

@end

