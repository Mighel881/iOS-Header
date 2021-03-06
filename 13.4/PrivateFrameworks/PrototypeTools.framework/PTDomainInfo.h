//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainGroupName;
    NSString *_domainName;
    NSString *_settingsClassName;
    NSString *_settingsFrameworkBundlePath;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *settingsFrameworkBundlePath; // @synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath;
@property(readonly, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
@property(readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property(readonly, nonatomic) NSString *domainGroupName; // @synthesize domainGroupName=_domainGroupName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithDomain:(id)arg1;

@end

