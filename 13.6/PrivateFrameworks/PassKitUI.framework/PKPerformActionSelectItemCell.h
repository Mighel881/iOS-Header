//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface PKPerformActionSelectItemCell : UITableViewCell
{
    UILabel *_descriptionLabel;
    UILabel *_amountLabel;
    NSString *_descriptionText;
    NSString *_amountText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *amountText; // @synthesize amountText=_amountText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void)_addSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

