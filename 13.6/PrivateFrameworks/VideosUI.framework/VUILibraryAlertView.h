//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryAlertView : UIView
{
    UIScrollView *_scrollView;
    UIView *_containerView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

