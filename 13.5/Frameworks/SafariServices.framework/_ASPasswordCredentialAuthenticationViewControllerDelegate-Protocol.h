//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSError, _ASPasswordCredentialAuthenticationViewController;

@protocol _ASPasswordCredentialAuthenticationViewControllerDelegate <NSObject>
- (void)passwordCredentialAuthenticationViewController:(_ASPasswordCredentialAuthenticationViewController *)arg1 didFinishWithCredential:(ASPasswordCredential *)arg2 error:(NSError *)arg3 completion:(void (^)(void))arg4;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(_ASPasswordCredentialAuthenticationViewController *)arg1;
@end

