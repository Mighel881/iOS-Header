//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class ACAccount, ACAccountStore;
@protocol FAFamilySetupPageDelegate;

@protocol FAFamilySetupPage <NSObject>
@property(nonatomic) __weak id <FAFamilySetupPageDelegate> delegate;
- (id)initWithAccount:(ACAccount *)arg1 store:(ACAccountStore *)arg2;
@end

