//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class ApplicationProxy, NSNumber, NSString;

@interface KeybagRequestTask : Task
{
    NSNumber *_accountID;
    ApplicationProxy *_proxy;
    NSString *_clientIdentifierHeader;
    NSString *_logUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
- (void)main;
- (id)initWithAccount:(id)arg1 proxy:(id)arg2 clientIdentifierHeader:(id)arg3;

@end

