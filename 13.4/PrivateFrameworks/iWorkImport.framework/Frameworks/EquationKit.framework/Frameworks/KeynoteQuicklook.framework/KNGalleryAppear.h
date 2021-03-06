//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <KeynoteQuicklook/KNAnimationEffect.h>

#import <KeynoteQuicklook/KNBuildBasicContentAnimator-Protocol.h>

@class NSString;

@interface KNGalleryAppear : KNAnimationEffect <KNBuildBasicContentAnimator>
{
}

+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

