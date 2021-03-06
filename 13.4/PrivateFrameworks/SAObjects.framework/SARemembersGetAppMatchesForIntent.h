//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAppMatchesForIntent;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *candidateBundleIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

