//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpController;

@interface SSFollowUpController : NSObject
{
    FLFollowUpController *_followUpController;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_dismissFollowUpWithIdentifier:(id)arg1;
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1;
- (id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3;
- (id)pendingFollowUpWithIdentifier:(id)arg1;
- (id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)dismissFollowUpWithIdentifier:(id)arg1;
- (id)init;

@end

