//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <DocumentManagerUICore/DOCThumbnailListener-Protocol.h>

@class NSLayoutConstraint, NSString;
@protocol DOCFittingImageViewDelegate, DOCThumbnail;

@interface DOCFittingImageView : UIImageView <DOCThumbnailListener>
{
    id <DOCFittingImageViewDelegate> _delegate;
    id <DOCThumbnail> _thumbnail;
    NSLayoutConstraint *_aspectRatioConstraint;
    struct CGSize _fittingSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint; // @synthesize aspectRatioConstraint=_aspectRatioConstraint;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(retain, nonatomic) id <DOCThumbnail> thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak id <DOCFittingImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)thumbnailLoaded:(id)arg1;
- (void)setImage:(id)arg1;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

