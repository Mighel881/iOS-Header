//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataLockEntry : _UIStatusBarDataEntry
{
    long long _unlockFailureCount;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long unlockFailureCount; // @synthesize unlockFailureCount=_unlockFailureCount;
- (id)_ui_descriptionBuilder;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;

@end

