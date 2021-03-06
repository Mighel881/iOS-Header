//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarFocusableButton.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CarFocusRingButton : CarFocusableButton <UIGestureRecognizerDelegate>
{
    CALayer *_knobFocusLayer;
    _Bool _showSelection;
    _Bool _reducedFocusLayerHeight;
    struct UIEdgeInsets _focusLayerInsets;
}

@property(nonatomic) struct UIEdgeInsets focusLayerInsets; // @synthesize focusLayerInsets=_focusLayerInsets;
@property(nonatomic, getter=isReducedFocusLayerHeight) _Bool reducedFocusLayerHeight; // @synthesize reducedFocusLayerHeight=_reducedFocusLayerHeight;
@property(nonatomic) _Bool showSelection; // @synthesize showSelection=_showSelection;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

