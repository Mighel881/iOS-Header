//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface HKCaretOptionalTextField : UITextField
{
    _Bool _allowsSelection;
    _Bool _disableActions;
}

@property(nonatomic) _Bool disableActions; // @synthesize disableActions=_disableActions;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (double)actualMinimumFontSize;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

