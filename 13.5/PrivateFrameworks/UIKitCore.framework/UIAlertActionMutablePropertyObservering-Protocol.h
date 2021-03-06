//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIAlertAction, UIColor;

@protocol UIAlertActionMutablePropertyObservering <NSObject>
- (void)_action:(UIAlertAction *)arg1 updatedTitleTextColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedImageTintColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToBePreferred:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToEnabled:(_Bool)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitle:(NSString *)arg2;
@end

