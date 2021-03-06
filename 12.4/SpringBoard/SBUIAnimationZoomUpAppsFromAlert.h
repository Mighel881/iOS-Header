//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, SBAppStatusBarSettingsAssertion, SBDeviceApplicationSceneEntity, SBWindowSelfHostWrapper;

@interface SBUIAnimationZoomUpAppsFromAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
    SBDeviceApplicationSceneEntity *_primaryAppSceneEntity;
    SBWindowSelfHostWrapper *_appHostWrapper;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

