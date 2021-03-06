//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMeetingResponseSingularResponse : ASItem
{
    NSString *_requestId;
    NSNumber *_status;
    NSString *_eventId;
    NSString *_instanceId;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (id)description;

@end

