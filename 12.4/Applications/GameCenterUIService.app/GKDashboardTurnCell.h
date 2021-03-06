//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKDashboardPlayerCell.h>

@class NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface GKDashboardTurnCell : GKDashboardPlayerCell
{
    long long _displayIndex;
    UILabel *_dateLabel;
    UILabel *_turnLabel;
    UIImageView *_actionIndicatorView;
    NSLayoutConstraint *_dateToNameConstraint;
    NSLayoutConstraint *_turnToNameConstraint;
    UIColor *_dateColor;
    UIColor *_turnColor;
    double _dateToNameConstant;
    double _turnToNameConstant;
}

+ (struct CGSize)defaultSizeForTurnDetail;
@property(nonatomic) double turnToNameConstant; // @synthesize turnToNameConstant=_turnToNameConstant;
@property(nonatomic) double dateToNameConstant; // @synthesize dateToNameConstant=_dateToNameConstant;
@property(retain, nonatomic) UIColor *turnColor; // @synthesize turnColor=_turnColor;
@property(retain, nonatomic) UIColor *dateColor; // @synthesize dateColor=_dateColor;
@property(nonatomic) NSLayoutConstraint *turnToNameConstraint; // @synthesize turnToNameConstraint=_turnToNameConstraint;
@property(nonatomic) NSLayoutConstraint *dateToNameConstraint; // @synthesize dateToNameConstraint=_dateToNameConstraint;
@property(nonatomic) UIImageView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(nonatomic) UILabel *turnLabel; // @synthesize turnLabel=_turnLabel;
@property(nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) long long displayIndex; // @synthesize displayIndex=_displayIndex;
- (void)setOnDarkBackground:(_Bool)arg1;
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;
- (void)configureForMatch:(id)arg1;
- (_Bool)wantsLocalPlayerAction:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

