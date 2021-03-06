//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPassGroupView, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject
{
    _UIDynamicValueAnimation *_panningAnimation;
    PKPassGroupView *_groupView;
    UIPanGestureRecognizer *_gestureRecognizer;
    double _panningViewTargetScale;
    struct CGPoint _panningViewStartPosition;
    struct CGPoint _panningViewTargetPosition;
}

@property(nonatomic) double panningViewTargetScale; // @synthesize panningViewTargetScale=_panningViewTargetScale;
@property(nonatomic) struct CGPoint panningViewTargetPosition; // @synthesize panningViewTargetPosition=_panningViewTargetPosition;
@property(nonatomic) struct CGPoint panningViewStartPosition; // @synthesize panningViewStartPosition=_panningViewStartPosition;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, retain, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
- (void).cxx_destruct;
- (void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3;
- (void)layoutViewsWithY:(double)arg1;
- (double)scaleForY:(double)arg1;
- (void)stop;
- (void)dealloc;
- (id)initWithGroupView:(id)arg1;
- (id)init;

@end

