//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _addressFieldName;
    int _groundviewFieldName;
    int _otherFieldName;
    int _poiFieldName;
    int _workflowFieldName;
    struct {
        unsigned int has_addressFieldName:1;
        unsigned int has_groundviewFieldName:1;
        unsigned int has_otherFieldName:1;
        unsigned int has_poiFieldName:1;
        unsigned int has_workflowFieldName:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsGroundviewFieldName:(id)arg1;
- (id)groundviewFieldNameAsString:(int)arg1;
@property(nonatomic) _Bool hasGroundviewFieldName;
@property(nonatomic) int groundviewFieldName;
- (int)StringAsOtherFieldName:(id)arg1;
- (id)otherFieldNameAsString:(int)arg1;
@property(nonatomic) _Bool hasOtherFieldName;
@property(nonatomic) int otherFieldName;
- (int)StringAsAddressFieldName:(id)arg1;
- (id)addressFieldNameAsString:(int)arg1;
@property(nonatomic) _Bool hasAddressFieldName;
@property(nonatomic) int addressFieldName;
- (int)StringAsPoiFieldName:(id)arg1;
- (id)poiFieldNameAsString:(int)arg1;
@property(nonatomic) _Bool hasPoiFieldName;
@property(nonatomic) int poiFieldName;
- (int)StringAsWorkflowFieldName:(id)arg1;
- (id)workflowFieldNameAsString:(int)arg1;
@property(nonatomic) _Bool hasWorkflowFieldName;
@property(nonatomic) int workflowFieldName;

@end

