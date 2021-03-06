//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserActivity;
@protocol OS_dispatch_queue;

@interface NPKContinuityCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserActivity *_provisionPassUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_setUpPeerPaymentUserActivity;
    NSUserActivity *_viewPeerPaymentUserActivity;
    NSUserActivity *_currentUserActivity;
}

+ (id)sharedContinuityCoordinator;
- (void).cxx_destruct;
@property(nonatomic) __weak NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property(retain, nonatomic) NSUserActivity *viewPeerPaymentUserActivity; // @synthesize viewPeerPaymentUserActivity=_viewPeerPaymentUserActivity;
@property(retain, nonatomic) NSUserActivity *setUpPeerPaymentUserActivity; // @synthesize setUpPeerPaymentUserActivity=_setUpPeerPaymentUserActivity;
@property(retain, nonatomic) NSUserActivity *individualPassUserActivity; // @synthesize individualPassUserActivity=_individualPassUserActivity;
@property(retain, nonatomic) NSUserActivity *passListUserActivity; // @synthesize passListUserActivity=_passListUserActivity;
@property(retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity; // @synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity;
@property(retain, nonatomic) NSUserActivity *provisionPassUserActivity; // @synthesize provisionPassUserActivity=_provisionPassUserActivity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (void)invalidateAllActivities;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsToViewPeerPaymentForHandle:(id)arg1;
- (void)userNeedsToSetUpPeerPayment;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(_Bool)arg2;
- (void)userViewingPassList;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

