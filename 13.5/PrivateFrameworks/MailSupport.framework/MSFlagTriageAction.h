//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction
{
    NSNumber *_flagColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *flagColor; // @synthesize flagColor=_flagColor;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (_Bool)_isFlagged;
- (_Bool)flagState;

@end

