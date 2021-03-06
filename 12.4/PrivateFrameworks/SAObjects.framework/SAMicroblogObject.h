//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SALocation, SAPersonAttribute;

@interface SAMicroblogObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSNumber *useLocation;
@property(copy, nonatomic) NSDictionary *socialProfileReferences;
@property(copy, nonatomic) NSString *serviceType;
@property(retain, nonatomic) SAPersonAttribute *sender;
@property(copy, nonatomic) NSURL *refereceId;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDictionary *hashtagAlternatives;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSURL *attachment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

