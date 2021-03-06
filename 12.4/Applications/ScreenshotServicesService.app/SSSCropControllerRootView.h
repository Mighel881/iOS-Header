//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, SSSCropOverlayView, SSSScrollView, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UncroppedOccludingView;
@protocol SSSCropControllerRootViewDelegate;

@interface SSSCropControllerRootView : UIView <UIScrollViewDelegate>
{
    SSSCropOverlayView *_overlayView;
    struct CGRect _overlayViewUnitRect;
    UncroppedOccludingView *_occludingView;
    struct CGRect _cropRectWhenViewSizeChangeBegan;
    UILongPressGestureRecognizer *_overlayViewResizeGesture;
    struct CGRect _overlayViewUnitRectWhenResizeBegan;
    struct CGPoint _locationOfResizeGestureInUsWhenResizeBegan;
    struct SSSCropOverlayGrabPosition _grabPositionForResize;
    _Bool _overlayViewResizeGestureIsTracking;
    SSSScrollView *_scrollView;
    struct CGRect _lastScrollViewUnitRect;
    _Bool _scrollViewIsInUserInitiatedZoom;
    NSTimer *_zoomInTimer;
    _Bool _isZoomingIn;
    _Bool _cropEnabled;
    UIView *_viewToCrop;
    UIColor *_backgroundColorForCrop;
    long long _numberOfTouchesRequiredForPanningCrop;
    NSArray *_snapRects;
    id <SSSCropControllerRootViewDelegate> _delegate;
    struct CGRect _cropRect;
}

@property(nonatomic) __weak id <SSSCropControllerRootViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *snapRects; // @synthesize snapRects=_snapRects;
@property(nonatomic) _Bool cropEnabled; // @synthesize cropEnabled=_cropEnabled;
@property(nonatomic) long long numberOfTouchesRequiredForPanningCrop; // @synthesize numberOfTouchesRequiredForPanningCrop=_numberOfTouchesRequiredForPanningCrop;
@property(copy, nonatomic) UIColor *backgroundColorForCrop; // @synthesize backgroundColorForCrop=_backgroundColorForCrop;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) UIView *viewToCrop; // @synthesize viewToCrop=_viewToCrop;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) double cornerRadius;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)_scrollViewIsInLiveUserEvent;
- (void)_updateForScrollViewNonLiveUserEvent;
- (void)_updateForScrollViewLiveUserEvent;
- (void)_updateLastScrollViewUnitRect;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewTerminalUserEventOccurred;
- (void)_emitCropRectChangeMessage;
- (struct CGRect)_sanitizedUnitRectForUnitRect:(struct CGRect)arg1;
- (struct CGPoint)_pointInViewToCropSpaceForUnitPoint:(struct CGPoint)arg1;
- (struct CGPoint)_unitPointForPointInViewToCropSpace:(struct CGPoint)arg1;
- (struct CGRect)_rectInViewToCropSpaceForUnitRect:(struct CGRect)arg1;
- (struct CGRect)_unitRectOfRectInViewToCropSpace:(struct CGRect)arg1;
- (struct CGRect)_currentCropRect;
- (struct CGRect)_currentScrollViewCropRect;
- (double)_maximumZoomScale;
- (double)_minimumZoomScaleForViewWithSize:(struct CGSize)arg1 inContainerSize:(struct CGSize)arg2;
- (void)_updateScrollViewZoomScaleEndpoints;
- (void)commitInflightEdits;
- (void)_moveToUnitRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (struct CGPoint)_contentOffsetForUnitRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)_contentInsetForUnitRect:(struct CGRect)arg1;
- (double)_zoomScaleForUnitRect:(struct CGRect)arg1;
- (void)_cancelZoomTimer;
- (void)_prolongZoomTimerStartingIfNotRunning:(_Bool)arg1;
- (_Bool)_zoomTimerRunning;
- (void)_zoomTimerFired;
- (struct CGSize)_minimumSizeForOverlayViewInUnitSpace;
- (struct CGSize)_minimumSizeForOverlayViewInBoundsSpace;
- (void)_handleOverlayViewResize:(id)arg1;
- (void)setOverlayViewUnitRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_didChangeSize;
- (void)_aboutToChangeSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

