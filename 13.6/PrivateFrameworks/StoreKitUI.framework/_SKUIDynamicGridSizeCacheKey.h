//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class SKUIViewElement;

__attribute__((visibility("hidden")))
@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying>
{
    long long _position;
    SKUIViewElement *_viewElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long position; // @synthesize position=_position;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)__isSKUIDynamicGridSizeCacheKey;

@end

