//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments *mImageAdjustments;
}

- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;
- (void)dealloc;
- (id)initWithImageAdjustments:(id)arg1;
- (id)init;

@end

