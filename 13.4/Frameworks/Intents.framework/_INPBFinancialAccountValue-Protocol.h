//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@protocol _INPBFinancialAccountValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasSecondaryBalance;
@property(retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(retain, nonatomic) _INPBDataString *organizationName;
@property(readonly, nonatomic) _Bool hasBalance;
@property(retain, nonatomic) _INPBBalanceAmountValue *balance;
@property(nonatomic) _Bool hasAccountType;
@property(nonatomic) int accountType;
@property(readonly, nonatomic) _Bool hasAccountNumber;
@property(copy, nonatomic) NSString *accountNumber;
@property(readonly, nonatomic) _Bool hasAccountNickname;
@property(retain, nonatomic) _INPBDataString *accountNickname;
- (int)StringAsAccountType:(NSString *)arg1;
- (NSString *)accountTypeAsString:(int)arg1;
@end

