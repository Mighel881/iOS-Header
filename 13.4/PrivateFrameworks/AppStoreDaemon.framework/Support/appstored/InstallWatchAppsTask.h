//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSArray, RequestThrottle;

@interface InstallWatchAppsTask : Task
{
    NSArray *_purchaseInfo;
    RequestThrottle *_requestThrottle;
    NSArray *_processedExternalIDs;
}

+ (id)_companionBundleIDForItemID:(id)arg1 requestToken:(id)arg2;
+ (id)_appAlreadyRequestedForPurchaseInfo:(id)arg1;
+ (_Bool)_appAlreadyInstalledForPurchaseInfo:(id)arg1 hasVersionOfBundleIDInstalled:(_Bool *)arg2;
+ (id)taskWithXPCAppMetadata:(id)arg1 forDevice:(id)arg2 requestToken:(id)arg3 requestThrottle:(id)arg4;
- (void).cxx_destruct;
- (void)main;
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithPurchaseInfo:(id)arg1 requestThrottle:(id)arg2;

@end

