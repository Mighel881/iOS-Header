//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransitionModel-Protocol.h>

@class UIImage, UIView;

@protocol AVTSectionItemTransitionModel <AVTTransitionModel>
- (void)cleanupAfterTransition;
- (void)prepareForTransitionToImage:(UIImage *)arg1;
- (UIView *)toView;
- (UIView *)fromView;
@end

