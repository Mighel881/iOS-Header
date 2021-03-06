//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BackgroundColorButton.h"

@class NSLayoutConstraint, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ExtendableButton : BackgroundColorButton
{
    NSLayoutConstraint *_extendedFullLabelLeadingConstraint;
    _Bool _extended;
    UILabel *_extendedFullLabel;
    UILabel *_extendedAbbreviationLabel;
    UIView *_alphaMask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExtended) _Bool extended; // @synthesize extended=_extended;
@property(readonly, nonatomic) UIView *alphaMask; // @synthesize alphaMask=_alphaMask;
@property(readonly, nonatomic) UILabel *extendedAbbreviationLabel; // @synthesize extendedAbbreviationLabel=_extendedAbbreviationLabel;
@property(readonly, nonatomic) UILabel *extendedFullLabel; // @synthesize extendedFullLabel=_extendedFullLabel;
- (void)finishShrinkingButton;
- (void)beginShrinkingButton;
- (void)beginExtendingButton;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

