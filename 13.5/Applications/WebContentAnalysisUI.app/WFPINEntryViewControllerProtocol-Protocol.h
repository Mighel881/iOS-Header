//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol WFPINEntryViewControllerProtocol
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;

@optional
- (void)permitURLWithCompletion:(void (^)(NSError *))arg1;
- (void)getIsPINPresentWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

