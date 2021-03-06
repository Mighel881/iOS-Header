//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FAButtonSpecification, FACAPackageView, NSString, UIButton, UILabel, UIStackView;
@protocol FADigitalHealthDelegate;

@interface FALockOutView : UIView
{
    UIStackView *_middleStackView;
    FACAPackageView *_backdropView;
    FACAPackageView *_hourglassView;
    _Bool _forSnapshot;
    id <FADigitalHealthDelegate> _delegate;
    FAButtonSpecification *_mainButtonSpecification;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_mainButton;
    NSString *_backdropState;
    NSString *_hourglassState;
}

@property(copy, nonatomic) NSString *hourglassState; // @synthesize hourglassState=_hourglassState;
@property(copy, nonatomic) NSString *backdropState; // @synthesize backdropState=_backdropState;
@property(readonly, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) FAButtonSpecification *mainButtonSpecification; // @synthesize mainButtonSpecification=_mainButtonSpecification;
@property(readonly, nonatomic, getter=isForSnapshot) _Bool forSnapshot; // @synthesize forSnapshot=_forSnapshot;
@property(nonatomic) __weak id <FADigitalHealthDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_timesUpView;
- (id)_hourglassView;
- (id)_hourglassPackageDescription;
- (id)messageFont;
- (id)titleFont;
- (id)defaultButtonColor;
- (void)_sendDelegateAction:(long long)arg1 parameters:(id)arg2;
- (void)_mainButtonTapped:(id)arg1;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)_addMainButton;
- (void)_addMessageLabel;
- (void)_addTitleLabel;
- (void)_addHourglassView;
- (id)_newStackView;
- (void)_setupMiddleStackView;
- (void)_setupBackdrops;
- (void)_setupConstraints;
- (void)_setup;
@property(nonatomic) double hourglassAlpha;
- (void)setBackdropState:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setBackdropState:(id)arg1 animated:(_Bool)arg2;
- (void)setHourglassState:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setHourglassState:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forSnapshot:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

