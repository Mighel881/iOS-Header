//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView, UISwitch;
@protocol PKSwitchSpinnerTableCellDelegate;

@interface PKSwitchSpinnerTableCell : PSTableCell
{
    UIActivityIndicatorView *_spinner;
    UISwitch *_switch;
    _Bool _showSpinner;
    id <PKSwitchSpinnerTableCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_switchToggled:(id)arg1;
- (void)_updateSubviews;
- (void)setShowSpinner:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setSwitchIsOn:(_Bool)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

