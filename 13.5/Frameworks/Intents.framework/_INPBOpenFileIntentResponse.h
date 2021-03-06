//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBOpenFileIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBInteger, _INPBString;

@interface _INPBOpenFileIntentResponse : PBCodable <_INPBOpenFileIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_f2ecb737 _has;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    NSArray *_entities;
    _INPBInteger *_numResults;
    _INPBString *_query;
}

+ (_Bool)supportsSecureCoding;
+ (Class)entitiesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBString *query; // @synthesize query=_query;
@property(retain, nonatomic) _INPBInteger *numResults; // @synthesize numResults=_numResults;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasQuery;
@property(readonly, nonatomic) _Bool hasNumResults;
- (id)entitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

