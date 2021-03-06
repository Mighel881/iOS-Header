//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/NSObject-Protocol.h>

@class CLSFaultProcessor, CLSRelation, NSObject;
@protocol CLSDataServerInterface, CLSRelationable;

@protocol CLSFaultProcessorDelegate <NSObject>
- (id <CLSDataServerInterface>)dataServer:(void (^)(NSError *))arg1;
- (_Bool)faultProcessor:(CLSFaultProcessor *)arg1 shouldFaultRelation:(CLSRelation *)arg2 fromObject:(NSObject<CLSRelationable> *)arg3;
@end

