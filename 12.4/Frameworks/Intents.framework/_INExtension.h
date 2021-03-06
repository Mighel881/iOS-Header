//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INApplicationContextProviding-Protocol.h>
#import <Intents/INIntentHandlerProvidingPrivate-Protocol.h>
#import <Intents/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface _INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProvidingPrivate, INApplicationContextProviding>
{
}

+ (void)initialize;
- (id)currentApplicationContext;
- (id)handlerForIntent:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

