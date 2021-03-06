//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarFocusableControl.h"

#import "SUICFlamesViewDelegate-Protocol.h"

@class NSString, SUICFlamesView, UIImageView;

__attribute__((visibility("hidden")))
@interface CarDictationButton : CarFocusableControl <SUICFlamesViewDelegate>
{
    UIImageView *_imageView;
    SUICFlamesView *_flamesView;
    long long _dictationState;
}

- (void).cxx_destruct;
@property(nonatomic) long long dictationState; // @synthesize dictationState=_dictationState;
- (long long)_flamesStateForDictationState:(long long)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)setDictationState:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

