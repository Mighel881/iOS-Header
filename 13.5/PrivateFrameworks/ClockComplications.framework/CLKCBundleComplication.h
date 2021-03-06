//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockComplications/CLKCComplication.h>

@class NSString;

@interface CLKCBundleComplication : CLKCComplication
{
    NSString *_bundleIdentifier;
    NSString *_appBundleIdentifier;
}

+ (id)complicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;

@end

