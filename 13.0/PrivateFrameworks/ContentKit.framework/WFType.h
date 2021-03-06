//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFType : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *typeDescription;
@property(readonly, nonatomic) NSString *string;
- (_Bool)isEqualToClass:(Class)arg1;
- (_Bool)isEqualToUTType:(struct __CFString *)arg1;
- (_Bool)isEqualToType:(id)arg1;
- (_Bool)conformsToClass:(Class)arg1;
- (_Bool)conformsToUTType:(struct __CFString *)arg1;
- (_Bool)conformsToTypes:(id)arg1;
- (_Bool)conformsToType:(id)arg1;

@end

