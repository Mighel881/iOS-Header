//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKDisplayType, WDDisplayTypeDescriptionView;

@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell
{
    WDDisplayTypeDescriptionView *_descriptionView;
    _Bool _showAttributionText;
    HKDisplayType *_displayType;
}

+ (double)minimumHeight;
+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAttributionText; // @synthesize showAttributionText=_showAttributionText;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
- (void)setupSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithDisplayType:(id)arg1 showAttributionText:(_Bool)arg2 reuseIdentifier:(id)arg3;

@end

