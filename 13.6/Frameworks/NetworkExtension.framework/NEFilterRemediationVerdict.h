//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
}

+ (id)needRulesVerdict;
+ (id)dropVerdict;
+ (id)allowVerdict;
- (long long)filterAction;

@end

