//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue;
@protocol OS_dispatch_queue;

@interface AppReceiptController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
}

+ (id)sharedController;
+ (void)refreshAppReceipt:(id)arg1 connection:(id)arg2;
+ (void)refreshAllReceipts:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (void)handleInvalidReceipt:(id)arg1 connection:(id)arg2;
+ (void)getApplicationReceiptPathWithMessage:(id)arg1 connection:(id)arg2;
+ (_Bool)connectionHasEntitlement:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_wasInstalledByConfigurator:(id)arg1;
- (void)_setReceiptRevocationCheckIntervalCellular:(double)arg1;
- (void)_setReceiptRevocationCheckInterval:(double)arg1;
- (void)_setLastReceiptRevocationCheckDate:(id)arg1;
- (void)_setCheckInterval:(double)arg1 forDefaultsKey:(struct __CFString *)arg2;
- (void)_resetBackgroundTaskJobs;
- (void)_performBackgroundReceiptRevocationCheckWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_performBackgroundReceiptRevocationCheck:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_performBackgroundReceiptRevocationCheckIfNeeded;
- (void)_performBackgroundCheckForJob:(id)arg1 jobName:(id)arg2;
- (id)_operationQueue;
- (void)_postNotificationForExpiring:(id)arg1;
- (void)_postNotificationForRevoked:(id)arg1;
- (id)_nextCheckDateWithInterval:(double)arg1;
- (void)_handleInvalidReceipt:(id)arg1 forConnection:(id)arg2;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (double)_checkIntervalWithDefault:(double)arg1 bagKey:(id)arg2 defaultsKey:(struct __CFString *)arg3;
- (void)_addRevocationCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(_Bool)arg3;
- (double)_automaticRevocationCheckIntervalCellular;
- (double)_automaticRevocationCheckInterval;
- (void)_addOperation:(id)arg1;
- (void)start;
- (void)repairApplicationSinfsForBundlesIfNecessary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

