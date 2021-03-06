//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSString, UIScene, UIWindowScene, _UIBannerContainerView, _UIBannerWindow;

@interface _UIBannerManager : NSObject <_UISceneComponentProviding>
{
    UIWindowScene *_windowScene;
    _UIBannerWindow *_window;
    _UIBannerContainerView *_containerView;
}

@property(retain, nonatomic) _UIBannerContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) _UIBannerWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
- (void).cxx_destruct;
- (id)bannerWithContent:(id)arg1;
- (void)_createWindowIfNeeded;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

