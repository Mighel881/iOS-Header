//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ShortcutsRowCollectionViewCell.h"

#import "UIFocusItem-Protocol.h"

@class CAShapeLayer, NSArray, NSString, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface CarShortcutCollectionViewCell : ShortcutsRowCollectionViewCell <UIFocusItem>
{
    CAShapeLayer *_focusRingLayer;
    _Bool _focusOverridden;
}

+ (double)focusRingTopOverhang;
+ (double)bottomMargin;
+ (double)textHorizontalMargin;
+ (double)titleTopMargin;
+ (id)subtitleFontWithTraitCollection:(id)arg1;
+ (id)titleFontWithTraitCollection:(id)arg1;
+ (double)imageSize;
+ (double)imageTopMargin;
+ (id)maximumContentSizeCategory;
@property(nonatomic) _Bool focusOverridden; // @synthesize focusOverridden=_focusOverridden;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)_updateFocusColor;
- (void)_createFocusRingLayer;
- (void)_updateFocus;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

