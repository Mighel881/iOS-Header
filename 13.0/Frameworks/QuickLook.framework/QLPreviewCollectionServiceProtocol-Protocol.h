//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPreviewCollectionProtocol-Protocol.h>

@class NSUUID;
@protocol QLNotificationCenterProtocol;

@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(void (^)(void))arg1;
- (void)getNetworkObserverWithCompletionBlock:(void (^)(id <QLNetworkStateListener>))arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(NSUUID *)arg1;
@end

