//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetAudioSourceInCarIntentExport-Protocol.h>

@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent <INSetAudioSourceInCarIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setRelativeAudioSourceReference:(long long)arg1;
@property(readonly, nonatomic) long long relativeAudioSourceReference;
- (void)setAudioSource:(long long)arg1;
@property(readonly, nonatomic) long long audioSource;
- (id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

