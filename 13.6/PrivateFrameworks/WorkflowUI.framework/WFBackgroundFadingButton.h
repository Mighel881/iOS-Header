//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton
{
    _Bool _derivesTitleColorFromTintColor;
    _Bool _derivesBackgroundColorFromTintColor;
    NSMutableDictionary *_backgroundColorsByState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *backgroundColorsByState; // @synthesize backgroundColorsByState=_backgroundColorsByState;
@property(nonatomic) _Bool derivesBackgroundColorFromTintColor; // @synthesize derivesBackgroundColorFromTintColor=_derivesBackgroundColorFromTintColor;
@property(nonatomic) _Bool derivesTitleColorFromTintColor; // @synthesize derivesTitleColorFromTintColor=_derivesTitleColorFromTintColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateBackgroundColorAnimated:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;

@end

