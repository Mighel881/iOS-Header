//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DCDocumentCameraViewServiceSessionRequest;

@protocol DCDocumentCameraViewServiceViewController
- (void)viewControllerWasDismissed;
- (void)prepareForDisplayWithCompletion:(void (^)(struct CGSize))arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)startSessionWithClientContext:(DCDocumentCameraViewServiceSessionRequest *)arg1 completion:(void (^)(DCDocumentCameraViewServiceSession *))arg2;
@end

