//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage
{
    unsigned long long _priority;
}

- (_Bool)shouldLog;
- (unsigned long long)priority;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long controllerID;
@property(readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;

@end

