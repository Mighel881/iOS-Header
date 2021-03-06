//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationAlertDestination-Protocol.h>
#import <SpringBoard/SBStarkNotificationsAgentDelegate-Protocol.h>

@class BSServiceConnectionEndpoint, DNDEventBehaviorResolutionService, NSMutableOrderedSet, NSString, SBStarkNotificationSceneComponentManager;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate;

@interface SBNotificationLegacyCarDestination : NSObject <NCNotificationAlertDestination, SBStarkNotificationsAgentDelegate>
{
    NSMutableOrderedSet *_activeComponents;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBStarkNotificationSceneComponentManager *_sceneComponentManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBStarkNotificationSceneComponentManager *sceneComponentManager; // @synthesize sceneComponentManager=_sceneComponentManager;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)agent:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)agent:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)agent:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

