//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACAuthenticationContext : NSObject
{
}

- (void)prepareMessage:(id)arg1;
- (void)verifyServiceTicketWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)fetchCurrentUserNameWithEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateWithRequest:(id)arg1 didSend:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRequest:(id)arg1 configuration:(id)arg2 didSend:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)checkVerifyServiceTicketRequest:(id)arg1;
- (id)checkAuthenticationRequest:(id)arg1;
- (id)checkServiceTicket:(id)arg1;
- (id)checkAppID:(id)arg1;
- (id)checkUserName:(id)arg1;
- (id)checkEnvironment:(long long)arg1;
- (id)suggestUserNameForEnvironment:(long long)arg1;
@property(readonly, nonatomic) _Bool isBusy;
@property(readonly, nonatomic) NSString *version;
- (id)privateInit;
- (void)setLogLevel:(long long)arg1;
- (long long)logLevel;

@end

