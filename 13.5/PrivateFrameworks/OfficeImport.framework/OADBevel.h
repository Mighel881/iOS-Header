//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADBevel : NSObject <NSCopying>
{
    int mType;
    float mWidth;
    float mHeight;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setHeight:(float)arg1;
- (float)height;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)setType:(int)arg1;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

