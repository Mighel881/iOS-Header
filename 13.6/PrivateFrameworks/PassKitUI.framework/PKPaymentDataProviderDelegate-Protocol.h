//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSSet, NSString, PKAppletSubcredential, PKFelicaPassProperties, PKPaymentMessage, PKPaymentTransaction, PKTransactionReceipt, PKTransitPassProperties;

@protocol PKPaymentDataProviderDelegate <NSObject>

@optional
- (void)transactionWithIdentifier:(NSString *)arg1 didDownloadTransactionReceipt:(PKTransactionReceipt *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateCredential:(PKAppletSubcredential *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithFelicaPassProperties:(PKFelicaPassProperties *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveBalanceUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(_Bool)arg2;
@end

