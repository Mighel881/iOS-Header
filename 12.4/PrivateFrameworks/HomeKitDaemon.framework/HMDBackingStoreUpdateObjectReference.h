//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation
{
    id _object;
    NSUUID *_uuid;
}

@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)main;
- (id)initWithObject:(id)arg1 uuid:(id)arg2;

@end

