//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand
{
}

+ (id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)changePrimaryUtterance;
- (_Bool)requiresResponse;
@property(nonatomic) long long utteranceIndex;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

