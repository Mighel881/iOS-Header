//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IKViewElement, VUIButton, VUIEpisodeBannerViewLayout, VUIFocusableTextView, VUILabel, VUIMediaTagsView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIEpisodeBannerView : UIView
{
    IKViewElement *_viewElement;
    VUIEpisodeBannerViewLayout *_layout;
    _TVImageView *_coverImageView;
    VUILabel *_headerTextView;
    VUIFocusableTextView *_descriptionTextView;
    VUIButton *_shareButton;
    VUIButton *_downloadButton;
    VUIButton *_playButton;
    VUIMediaTagsView *_tagsView;
    VUIMediaTagsView *_infoTagsView;
}

@property(retain, nonatomic) VUIMediaTagsView *infoTagsView; // @synthesize infoTagsView=_infoTagsView;
@property(retain, nonatomic) VUIMediaTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) VUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) VUIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) VUIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) VUIFocusableTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) VUILabel *headerTextView; // @synthesize headerTextView=_headerTextView;
@property(retain, nonatomic) _TVImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) VUIEpisodeBannerViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (double)topMarginFromView:(id)arg1 toPreviousView:(id)arg2 withBaselineMargin:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

