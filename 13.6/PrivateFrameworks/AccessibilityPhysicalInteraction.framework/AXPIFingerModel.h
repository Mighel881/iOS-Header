//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AXPIFingerModelDelegate;

@interface AXPIFingerModel : NSObject
{
    _Bool _pressed;
    _Bool _selected;
    double _force;
    unsigned long long _shape;
    id <AXPIFingerModelDelegate> _delegate;
    struct CGPoint _location;
}

+ (id)fingerModelForLocation:(struct CGPoint)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AXPIFingerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) unsigned long long shape; // @synthesize shape=_shape;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
- (id)description;
- (void)setPressed:(_Bool)arg1 sendDelegateCallback:(_Bool)arg2;

@end

