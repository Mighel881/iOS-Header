//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SBApplicationBlurSnapshotGenerationContainerView : UIView
{
    UIView *_wallpaperView;
    UIView *_realSnapshotView;
    UIView *_liveBlurView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *liveBlurView; // @synthesize liveBlurView=_liveBlurView;
@property(retain, nonatomic) UIView *realSnapshotView; // @synthesize realSnapshotView=_realSnapshotView;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
- (void)layoutSubviews;

@end

