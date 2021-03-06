//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDeparturePredicate : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDTimeRange _timeRange;
    unsigned int _numAdditionalDepartures;
    struct {
        unsigned int timeRange:1;
        unsigned int numAdditionalDepartures:1;
    } _has;
}

@property(nonatomic) unsigned int numAdditionalDepartures; // @synthesize numAdditionalDepartures=_numAdditionalDepartures;
@property(nonatomic) struct GEOPDTimeRange timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumAdditionalDepartures;
@property(nonatomic) _Bool hasTimeRange;
- (id)initWithTraitsTransitModeFilter:(id)arg1;

@end

