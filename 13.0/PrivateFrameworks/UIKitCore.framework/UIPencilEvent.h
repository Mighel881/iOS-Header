//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface UIPencilEvent : UIEvent
{
    NSHashTable *_trackedInteractions;
}

@property(retain, nonatomic) NSHashTable *trackedInteractions; // @synthesize trackedInteractions=_trackedInteractions;
- (void).cxx_destruct;
- (long long)subtype;
- (long long)type;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (id)_init;

@end

