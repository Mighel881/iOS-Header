//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol HKFitnessMachineConnectionClientInterface;

@interface HDFitnessMachineConnection : NSObject
{
    NSUUID *_uuid;
    id <HKFitnessMachineConnectionClientInterface> _client;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HKFitnessMachineConnectionClientInterface> client; // @synthesize client=_client;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)initWithUUID:(id)arg1 client:(id)arg2;

@end

