//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView
{
    UILabel *_label;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *displayString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

