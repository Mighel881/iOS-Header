//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CSHomeAffordanceView, NSMutableArray, SBFHomeGrabberSettings, UIView;

@interface CSHomeAffordanceViewController : UIViewController
{
    UIView *_counterRotationView;
    NSMutableArray *_rotationWrapperViews;
    long long _orientation;
    SBFHomeGrabberSettings *_settings;
    CSHomeAffordanceView *_homeAffordanceView;
    struct CGPoint _homeAffordanceOffset;
}

@property(nonatomic) struct CGPoint homeAffordanceOffset; // @synthesize homeAffordanceOffset=_homeAffordanceOffset;
@property(readonly, nonatomic) CSHomeAffordanceView *homeAffordanceView; // @synthesize homeAffordanceView=_homeAffordanceView;
- (void).cxx_destruct;
- (id)_addWrapperViewWithOrientation:(long long)arg1;
- (struct CGRect)_homeAffordanceRestingFrame;
- (void)_layoutHomeAffordance;
- (void)setLegibilitySettings:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

