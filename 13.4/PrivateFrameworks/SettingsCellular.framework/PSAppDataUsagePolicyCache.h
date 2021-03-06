//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PSAppDataUsagePolicyCache : NSObject
{
    NSCache *_policyCache;
    struct __CTServerConnection *_ctServerConnection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
@property(retain, nonatomic) NSCache *policyCache; // @synthesize policyCache=_policyCache;
- (_Bool)setUsagePoliciesForBundle:(id)arg1 cellular:(_Bool)arg2 wifi:(_Bool)arg3;
- (_Bool)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;
- (id)usagePolicyFor:(id)arg1;
- (id)fetchUsagePolicyFor:(id)arg1;
- (id)init;
- (void)willEnterForeground;
- (void)dealloc;
- (void)handlePolicyChangedNotification;
- (id)initPrivate;

@end

