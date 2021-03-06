//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIVisualEffect, UIVisualEffectView;

@interface DOCVisualEffectLabel : UIView
{
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
}

@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
@property(copy, nonatomic) UIVisualEffect *effect;
- (void)DOCVisualEffectLabelSharedInitWithEffect:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 effect:(id)arg2;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

