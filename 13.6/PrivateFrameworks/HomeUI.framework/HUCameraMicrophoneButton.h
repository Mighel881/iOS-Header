//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImage;

@interface HUCameraMicrophoneButton : UIControl
{
    _Bool _on;
    UIImage *_microphoneImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *microphoneImage; // @synthesize microphoneImage=_microphoneImage;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (id)_circleColor;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateImage;
- (void)_updateAlpha;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

