//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString;

@protocol INSearchForAccountsIntentExport <NSObject, JSExport>
@property(nonatomic) long long requestedBalanceType;
@property(copy, nonatomic) INSpeakableString *organizationName;
@property(nonatomic) long long accountType;
@property(copy, nonatomic) INSpeakableString *accountNickname;
- (id)init;
@end

