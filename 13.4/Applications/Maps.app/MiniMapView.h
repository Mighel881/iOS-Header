//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKMapView, MKMuninView, UIImageView;

__attribute__((visibility("hidden")))
@interface MiniMapView : UIView
{
    MKMuninView *_muninView;
    MKMapView *_miniMapView;
    UIImageView *_puckView;
}

- (void).cxx_destruct;
- (void)setCameraLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 yaw:(double)arg4 pitch:(double)arg5;
- (void)updateMiniMap;
- (struct CGSize)intrinsicContentSize;
- (id)initWithMuninView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_maps_initCommon;

@end

