//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUI/NSCopying-Protocol.h>

@interface _IMTranscriptBubbleSizeCacheEntry : NSObject <NSCopying>
{
    double _maximumWidth;
    struct CGSize _size;
}

@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)description;
@property(readonly, nonatomic) double minimumWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1 maximumWidth:(double)arg2;

@end

