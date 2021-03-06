//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CellVendor-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAGradientLayer, NSLayoutConstraint, NSMutableDictionary, NSString, NSTimer, UICollectionView, UILabel, UIPageControl, UITapGestureRecognizer, UIView;
@protocol SteppingPageViewControllerDelegate, SteppingSignGenerator;

__attribute__((visibility("hidden")))
@interface SteppingPageViewController : UIViewController <CellVendor, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UIPageControl *_pageControl;
    UILabel *_pageMarkerLabel;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_auxViewHeightConstraint;
    NSLayoutConstraint *_pageControlHeightConstraint;
    NSLayoutConstraint *_topAuxViewToPageControlBottomConstraint;
    NSLayoutConstraint *_topAuxViewToPageMarkerBaselineConstraint;
    NSMutableDictionary *_auxViewHeightCache;
    UIView *_fromAuxView;
    UIView *_toAuxView;
    CAGradientLayer *_maskLayer;
    UIView *_resizeSnapshot;
    NSTimer *_scrollTimer;
    long long _rightBuffer;
    long long _leftBuffer;
    long long _startSign;
    long long _currentSign;
    unsigned long long _lastUserGesture;
    double _widthAsOfLastSignRefresh;
    _Bool _pageIndicatorHidden;
    id <SteppingSignGenerator> _signGenerator;
    id <SteppingPageViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_auxViewContainer;
    NSLayoutConstraint *_signHeightConstraint;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(nonatomic, getter=isPageIndicatorHidden) _Bool pageIndicatorHidden; // @synthesize pageIndicatorHidden=_pageIndicatorHidden;
@property(retain, nonatomic) NSLayoutConstraint *signHeightConstraint; // @synthesize signHeightConstraint=_signHeightConstraint;
@property(retain, nonatomic) UIView *auxViewContainer; // @synthesize auxViewContainer=_auxViewContainer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SteppingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <SteppingSignGenerator> signGenerator; // @synthesize signGenerator=_signGenerator;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_getCurrentSignIndexesAdjustedForRTL:(_Bool)arg1 from:(long long *)arg2 to:(long long *)arg3 closest:(long long *)arg4 progressBetweenSigns:(double *)arg5;
- (long long)_adjustedSignIndex:(long long)arg1 adjustForRTL:(_Bool)arg2;
- (double)_collectionViewContentOffsetIndex;
- (double)_calculatedAuxViewHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;
- (void)_updateAuxViewsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;
- (void)_initAuxView:(id)arg1 forIndex:(long long)arg2;
- (double)_signToPageControlBottomMarginAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;
- (double)_calculatedSignToPageControlBaselineHeightFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_forcedScrollDidEnd;
- (void)_updateCurrentPageAndNotifyDelegate;
- (void)reloadWithSignGenerator:(id)arg1;
@property long long signIndex;
- (void)setSignIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)auxViewIfVisibleAtIndex:(long long)arg1;
- (id)signCellIfVisibleAtIndex:(long long)arg1;
- (long long)numberOfSigns;
- (double)_heightForAuxViewAtIndex:(long long)arg1;
- (double)heightForSignAtIndex:(long long)arg1;
- (void)_sizeClassDidChange;
- (void)_animateSizeClassChange;
- (void)updateSignForClusteredVehicleChangeInLeg:(id)arg1;
- (void)sizeClassWillChangeWithTransitionCoordinator:(id)arg1;
- (long long)resetCurrentSignAnimated:(_Bool)arg1;
- (void)setPageIndicatorHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshSigns;
- (void)refreshCurrentSign;
- (void)_updateSignHeightConstraintsFrom:(long long)arg1 to:(long long)arg2 progress:(double)arg3;
- (void)_updateSignHeightAnimated:(_Bool)arg1;
- (void)_updateSignHeight;
- (void)_localeDidChange;
- (void)_contentSizeDidChange;
- (void)_handleTap:(id)arg1;
- (_Bool)_isPointNearRightEdge:(struct CGPoint)arg1;
- (_Bool)_isPointNearLeftEdge:(struct CGPoint)arg1;
- (_Bool)_isRTL;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)_setupConstraints;
- (void)_initPageMarkerLabel;
- (void)_initPageControl;
- (void)_setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSignGenerator:(id)arg1 isForWalkingNav:(_Bool)arg2;
- (void)_updatePageIndicatorVisibility;
- (void)_updatePageMarkerText;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

