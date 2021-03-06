//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement
{
    unsigned long long _component;
    UIPickerView *_picker;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIPickerView *picker; // @synthesize picker=_picker;
@property(nonatomic) unsigned long long component; // @synthesize component=_component;
- (_Bool)canBecomeFocused;
- (id)accessibilityUserInputLabels;
- (id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)arg1;
- (id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)_accessibilityScrollStatus;
- (_Bool)_isRowDisabledInWebKit:(long long)arg1;
- (void)_accessibilityMoveSelection:(long long)arg1;
- (struct CGRect)accessibilityFrame;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityValue;
- (double)_accessibilityNumberValue;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (id)_accessibilityViewForComponent;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (_Bool)_axIsInDatePickerView;
- (long long)_accessibilityPickerType;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)_accessibilityAutomationType;

@end

