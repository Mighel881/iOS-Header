//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/NSCopying-Protocol.h>

@class NSUUID;

@interface FIUIClientToken : NSObject <NSCopying>
{
    NSUUID *_UUID;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithUUID:(id)arg1;
- (id)init;

@end

