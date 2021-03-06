//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MapsTheming-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AudioSettingsTableViewCell : UITableViewCell <MapsTheming>
{
    _Bool _cellEnabled;
    double _textIndentation;
    _Bool _checked;
}

@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) double textIndentation; // @synthesize textIndentation=_textIndentation;
@property(nonatomic) _Bool cellEnabled; // @synthesize cellEnabled=_cellEnabled;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)updateTheme;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

