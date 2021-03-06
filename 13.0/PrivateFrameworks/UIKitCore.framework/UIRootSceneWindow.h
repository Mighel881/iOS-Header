//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRootWindow.h>

#import <UIKitCore/UIMutableTransformerDelegate-Protocol.h>

@class CALayer, FBSDisplayConfiguration, NSString, UIMutableTransformer, UIView;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate>
{
    FBSDisplayConfiguration *_displayConfiguration;
    UIView *_sceneContainerView;
    UIMutableTransformer *_sceneTransformer;
    CALayer *_bezelLayer;
    CALayer *_maskLayer;
}

+ (_Bool)_isSecure;
@property(readonly, nonatomic) UIView *_sceneContainerView; // @synthesize _sceneContainerView;
@property(readonly, nonatomic) UIMutableTransformer *sceneTransformer; // @synthesize sceneTransformer=_sceneTransformer;
@property(readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
- (void).cxx_destruct;
- (void)_updateTransforms;
- (void)transformsDidChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_focusResponder;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_appearsInLoupe;
- (_Bool)_usesWindowServerHitTesting;
- (void)dealloc;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

