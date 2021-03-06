//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKSource, NSLayoutConstraint, UITextView, _HKClinicalBulletedListLayoutManager;

@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell
{
    HKSource *_source;
    NSLayoutConstraint *_superviewTopToContentsTextViewFirstBaselineConstraint;
    NSLayoutConstraint *_contentsTextViewLastBaselineToSuperviewBottomConstraint;
    UITextView *_contentsTextView;
    _HKClinicalBulletedListLayoutManager *_bulletLayoutManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _HKClinicalBulletedListLayoutManager *bulletLayoutManager; // @synthesize bulletLayoutManager=_bulletLayoutManager;
@property(readonly, nonatomic) UITextView *contentsTextView; // @synthesize contentsTextView=_contentsTextView;
@property(readonly, nonatomic) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint; // @synthesize contentsTextViewLastBaselineToSuperviewBottomConstraint=_contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint; // @synthesize superviewTopToContentsTextViewFirstBaselineConstraint=_superviewTopToContentsTextViewFirstBaselineConstraint;
@property(nonatomic) __weak HKSource *source; // @synthesize source=_source;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (id)_bulletContentFont;
- (id)_bulletFont;
- (id)_bodyEmph;
- (id)_attributedStringForBullet;
- (id)_bulletContentParagraphStyle;
- (id)_attributedStringForBulletAtIndex:(long long)arg1;
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)arg1;
- (id)_titleParagraphStyle;
- (id)_attributedTitleString;
- (id)_localizedTitleString;
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;
- (id)_createContentsTextViewWithLayoutManager:(id)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

