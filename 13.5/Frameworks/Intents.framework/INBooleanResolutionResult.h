//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INBooleanResolutionResultExport-Protocol.h>

@class NSString;

@interface INBooleanResolutionResult : INIntentResolutionResult <INBooleanResolutionResultExport>
{
}

+ (id)confirmationRequiredWithValueToConfirm:(id)arg1;
+ (id)successWithResolvedValue:(_Bool)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

