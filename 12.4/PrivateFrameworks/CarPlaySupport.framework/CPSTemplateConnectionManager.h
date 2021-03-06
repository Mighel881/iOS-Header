//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPSTemplateInstanceDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CPSTemplateConnectionManager : NSObject <CPSTemplateInstanceDelegate>
{
    NSObject<OS_dispatch_queue> *_viewControllerAccessQueue;
    NSMutableDictionary *_viewControllersBySceneIdentifier;
    NSMutableDictionary *_templateInstancesBySceneIdentifier;
}

- (void).cxx_destruct;
- (id)_listenerEndpointForTestSceneIdentifier:(id)arg1;
- (void)didDisconnectTemplateInstance:(id)arg1;
- (void)updateTemplateInstanceForScene:(id)arg1;
- (id)viewControllerForSceneIdentifierCreateIfNecessary:(id)arg1;
- (_Bool)handleEndpointRequestAction:(id)arg1 forSceneIdentifier:(id)arg2;
- (id)_instanceForSceneIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

