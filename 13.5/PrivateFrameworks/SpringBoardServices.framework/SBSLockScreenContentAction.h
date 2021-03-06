//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSString;

@interface SBSLockScreenContentAction : BSAction
{
    unsigned long long _type;
    NSString *_slot;
    unsigned long long _secureAppType;
    id _configurationObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id configurationObject; // @synthesize configurationObject=_configurationObject;
@property(nonatomic) unsigned long long secureAppType; // @synthesize secureAppType=_secureAppType;
@property(retain, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

