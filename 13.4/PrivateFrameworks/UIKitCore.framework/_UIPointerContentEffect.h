//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPointerInteractionAnimator, UIPointerRegion, UIPointerStyle, UIView, _UIPointerEffectPlatterView;

__attribute__((visibility("hidden")))
@interface _UIPointerContentEffect : NSObject
{
    struct {
        _Bool isRearrangingEffectViews;
        _Bool sourceViewDidAllowEdgeAntialiasing;
        _Bool sourceViewDidAlignContentsToPixels;
    } _flags;
    _Bool _pressed;
    UIPointerRegion *_region;
    UIPointerStyle *_style;
    UIPointerInteractionAnimator *_entranceAnimator;
    UIPointerInteractionAnimator *_exitAnimator;
    _UIPointerEffectPlatterView *_platterView;
    UIView *_lumaSamplingBackdrop;
    UIView *_pointerPortal;
    CDUnknownBlockType _completion;
    long long _state;
    unsigned long long _animationCount;
    UIView *_positionReferenceView;
    UIView *_sublayerObservationView;
    UIView *_boundsObservationView;
    struct CGPoint _initialEffectPlatterPosition;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint initialEffectPlatterPosition; // @synthesize initialEffectPlatterPosition=_initialEffectPlatterPosition;
@property(nonatomic) __weak UIView *boundsObservationView; // @synthesize boundsObservationView=_boundsObservationView;
@property(nonatomic) __weak UIView *sublayerObservationView; // @synthesize sublayerObservationView=_sublayerObservationView;
@property(nonatomic) __weak UIView *positionReferenceView; // @synthesize positionReferenceView=_positionReferenceView;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak UIView *pointerPortal; // @synthesize pointerPortal=_pointerPortal;
@property(nonatomic) __weak UIView *lumaSamplingBackdrop; // @synthesize lumaSamplingBackdrop=_lumaSamplingBackdrop;
@property(retain, nonatomic) _UIPointerEffectPlatterView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(retain, nonatomic) UIPointerInteractionAnimator *exitAnimator; // @synthesize exitAnimator=_exitAnimator;
@property(retain, nonatomic) UIPointerInteractionAnimator *entranceAnimator; // @synthesize entranceAnimator=_entranceAnimator;
@property(retain, nonatomic) UIPointerStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) UIPointerRegion *region; // @synthesize region=_region;
- (void)_ensureRelativeEffectViewOrderInContainer;
- (void)_modifyEffectContainerViewHierarchy:(CDUnknownBlockType)arg1;
- (void)_cleanUpObservation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_anchorPlatterView:(id)arg1 toPreview:(id)arg2 updateBounds:(_Bool)arg3;
- (void)_tearDownPlatterView;
- (void)_createAndInstallPlatterView;
- (void)_clearArbiterPointerStyleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_commitPointerStyleToArbiterWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateFromState:(long long)arg1 toState:(long long)arg2;
- (void)end;
- (void)begin;
- (void)_updatePlatterView:(id)arg1 forStyle:(id)arg2;
- (void)setStyle:(id)arg1 andRegion:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

