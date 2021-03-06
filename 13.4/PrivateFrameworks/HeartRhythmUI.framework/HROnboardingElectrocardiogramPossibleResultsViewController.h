//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRLinkTextViewDelegate-Protocol.h>
#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKElectrocardiogram, HKHealthStore, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate>
{
    HKElectrocardiogram *_electrocardiogram;
    HKHealthStore *_healthStore;
    UILabel *_titleLabel;
    HROnboardingElectrocardiogramResultView *_sinusRhythmResultReview;
    HROnboardingElectrocardiogramResultView *_atrialFibrillationResultView;
    HROnboardingElectrocardiogramResultView *_highOrLowHeartRateResultView;
    HROnboardingElectrocardiogramResultView *_inconclusiveResultView;
    HROnboardingElectrocardiogramResultView *_onlyResultView;
    HROnboardingElectrocardiogramResultView *_bottomResultView;
    UILabel *_disclaimerLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutAnchor *_viewTopAnchor;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_disclaimerLabelTopConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint; // @synthesize disclaimerLabelTopConstraint=_disclaimerLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutAnchor *viewTopAnchor; // @synthesize viewTopAnchor=_viewTopAnchor;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView; // @synthesize bottomResultView=_bottomResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView; // @synthesize onlyResultView=_onlyResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView; // @synthesize inconclusiveResultView=_inconclusiveResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView; // @synthesize highOrLowHeartRateResultView=_highOrLowHeartRateResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView; // @synthesize atrialFibrillationResultView=_atrialFibrillationResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview; // @synthesize sinusRhythmResultReview=_sinusRhythmResultReview;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
- (void)_pauseResultViewVideos;
- (void)_playResultViewVideos;
- (void)_adjustStackedButtonViewLocationForViewContentHeight;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpStackedButtonView;
- (void)_adjustDisclaimerLabelConstraints;
- (void)_setUpDisclaimerLabel;
- (void)_setUpBottomResultViewConstraint;
- (void)_setUpAllResultViewConstraints;
- (void)_setUpAllResultViews;
- (void)_setUpOnlyResultViewConstraints;
- (void)_setUpOnlyResultView;
- (id)_resultViewForSample:(id)arg1;
- (void)_setUpTitleConstraints;
- (void)_setUpTitle;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSample:(id)arg1;
- (id)initForOnboarding:(_Bool)arg1;

@end

